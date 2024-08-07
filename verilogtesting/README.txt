make a FIFO buffer with vim <name>.v
add a test bench, preferably named the same thing as the buffer but <name>_tb.v


run:
verilator --binary ~/<location>/<name>.v ~/<location>/<test bench>.v --top <testbench name> -Wall -j 0 --assert --trace-fst --Wno-fatal

--Wno-fatal //allows to run the thing without the warnings exiting prematurely
-Wall   //strict warning
-j 0    //makes fully parallelized
--assert     //enables system Verilog assertions
--trace-fst    /dump as a FST (compressed version of the VCD


the .vcd is in obj-dir folder
to view the waves, gtkwave <name of .vcs file>.vcd

view by going through TOP -> <testbench name> -><name you gave the synchronous fifo in the testbench>  
then append