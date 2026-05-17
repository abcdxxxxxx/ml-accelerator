read_liberty scripts/nangate45.lib
read_verilog scripts/pe_netlist.v
link_design pe

# Try 600 MHz = 1.667ns
create_clock -name clk -period 1.667 [get_ports clk]
set_input_delay 0.1 -clock clk [all_inputs]
set_output_delay 0.1 -clock clk [all_outputs]
report_wns
report_tns
exit
