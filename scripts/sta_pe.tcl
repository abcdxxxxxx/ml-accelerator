read_liberty scripts/nangate45.lib
read_verilog scripts/pe_netlist.v
link_design pe

# Clock: 500 MHz = 2ns period
create_clock -name clk -period 2.0 [get_ports clk]

# Input/output delays
set_input_delay 0.1 -clock clk [all_inputs]
set_output_delay 0.1 -clock clk [all_outputs]

# Run STA
report_checks -path_delay max -format full_clock_expanded -digits 3
report_wns
report_tns
report_power
exit
