# User Guideline

## Software Generation & Hardware Integration Workflow

1. Navigate to the Software Directory
    - Open the `software` folder in your terminal.
2. Execute the Training and Generation Script
    - Run the main Python script:
        ```python
        python LeNet.py
        ```
    - Note: If the pre-trained weights (`best_lenet_fp32.pth`) are not found, the script will automatically train the FP32 model from scratch. Otherwise, it will load the existing weights.
    - Outputs: The script will generate a specific directory (e.g., `hw_export_INTX/`) containing the following essential hardware verification and compilation files:
        1. `DRAM.txt` (Input Feature Maps for the testbench)
        2. `GOLDEN_LABEL.txt` (Ground truth labels for the images)
        3. `GOLDEN_PRED.txt` (Software predictions for accuracy comparison)
        4. `ROM_sparse_COE.coe` (Sparse compressed weights generated from kernel1~5)
            - INT8 : `ROM_sparse_COE.coe`
            - INT4 : `ROM_sparse_INT4_PACKED_SIMD2_FULL.coe`
            - INT4 signed extension to INT8 : `ROM_sparse_COE.coe`
            - PACT_INT4 : `ROM_sparse_INT4_PACKED_SIMD2_FULL.coe`
        5. `rom_params_for_verilog.txt` (Hardware parameters for CSC address and data lengths)
            - INT8 : `rom_params_for_verilog.txt`
            - INT4 : `rom_params_for_verilog_int4_simd2.txt`
            - INT4 signed extension to INT8 : `rom_params_for_verilog.txt`
            - PACT_INT4 : `rom_params_for_verilog_int4_simd2.txt`
3. Integrate Generated Files into the FPGA Design
Transfer the generated files to their respective hardware directories:
    1. Verification Files: Replace the existing `DRAM.txt`, `GOLDEN_LABEL.txt`, and `GOLDEN_PRED.txt` in `FPGA_design/test/tb/TOP_test/MEM/`.
    2. Verilog Parameters: Open `rom_params_for_verilog.txt` or `rom_params_for_verilog_int4_simd2.txt`, copy its contents, and replace lines 43~54(INT8) and 56~67(INT4/PACT_INT4) in `FPGA_design/src/TOP/TOP_interface.v`.
    3. ROM Initialization: 
        - INT8 : Replace the existing `.coe` file at `FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe`.
        - INT4/PACT_INT4 : Replace the existing `.coe` file at `FPGA_design/test/tb/TOP_test/MEM/int4_packed/ROM_sparse_INT4_PACKED_SIMD2_FULL.coe`.
    - Quantization Shift Adjustment:
        - If generating for INT4, you MUST modify `FPGA_design/src/Quantizer/Psum_Requantizer.v` and change the bit-shift operation from `>>> 6` to `>>> 5` and constant from `21'sd32` to `21'sd16`.
        - If generating for INT8, you MUST modify `FPGA_design/src/Quantizer/Psum_Requantizer.v` and change the bit-shift operation from `>>> 10` to `>>> 9` and constant from `21'sd512` to `21'sd256`.

## 4. Hardware Shift Analysis & Visualization (Optional but Recommended)
To verify the stability of the hardware shift operations (`>>> N`) and visualize the effectiveness of the PACT algorithm, you can generate Monte Carlo distribution histograms across different quantization schemes.

1. Ensure the models are trained
    - Before generating the histograms, make sure all quantized weights are ready.
    - command : 
      ```bash
      python LeNet.py
      ```
2. Execute the Histogram Generator
    - Run the analysis script to sample 1,000 random images and plot the optimal shift value distributions for each hardware kernel.
    - command : 
      ```bash
      python draw_hist.py
      ```
3. Expected Outputs
    - The script will generate three PNG files in your current directory, providing a visual proof of HW/SW co-design stability:
        - `shift_hist_INT8.png` : Baseline shift stability for standard INT8.
        - `shift_hist_INT4_Standard.png` : Shows variance and shift-swapping in deeper layers due to unbounded outliers.
        - `shift_hist_INT4_PACT.png` : Demonstrates perfect hardware shift convergence, as the PACT algorithm tightly constrains the feature distributions.