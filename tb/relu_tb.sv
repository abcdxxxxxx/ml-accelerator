module relu_tb;
logic signed [31:0] data_in, data_out;
relu #(.WIDTH(32)) dut (.*);

initial begin
    data_in = 100;  #1; $display("relu(100)=%0d (expect 100) %s", data_out, data_out==100?"PASS":"FAIL");
    data_in = -50;  #1; $display("relu(-50)=%0d (expect 0) %s",  data_out, data_out==0?"PASS":"FAIL");
    data_in = 0;    #1; $display("relu(0)=%0d (expect 0) %s",    data_out, data_out==0?"PASS":"FAIL");
    data_in = 32767;#1; $display("relu(32767)=%0d (expect 32767) %s", data_out, data_out==32767?"PASS":"FAIL");
    data_in = -1;   #1; $display("relu(-1)=%0d (expect 0) %s",   data_out, data_out==0?"PASS":"FAIL");
    $finish;
end
endmodule
