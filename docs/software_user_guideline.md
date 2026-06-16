# User Guideline

## Software Generation & Hardware Integration Workflow

1. Navigate to the Software Directory
    - Open the `Software_gen` folder in your terminal.
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
        5. `rom_params_for_verilog.txt` (Hardware parameters for CSC address and data lengths)
3. Integrate Generated Files into the FPGA Design
Transfer the generated files to their respective hardware directories:
    1. Verification Files: Replace the existing `DRAM.txt`, `GOLDEN_LABEL.txt`, and `GOLDEN_PRED.txt` in `FPGA_design/test/tb/TOP_test/MEM/`.
    2. Verilog Parameters: Open `rom_params_for_verilog.txt`, copy its contents, and replace lines 32~45 in `FPGA_design/src/TOP/TOP_interface.v`.
    3. ROM Initialization: Replace the existing `.coe` file at `FPGA_design/Vivado/PYNQ_Z2/PYNQ_Z2.ip_user_files/mem_init_files/ROM_sparse_COE.coe`.
    - Quantization Shift Adjustment:
        - If generating for INT4, you MUST modify `FPGA_design/src/Quantizer/Psum_Requantizer.v` and change the bit-shift operation `from >>> 10` to `>>> 4`.
        - If generating for INT8, keep the original `>>> 10`.

