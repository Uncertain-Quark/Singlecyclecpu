module cpu_tb();
    reg clk, reset;
    wire [31:0] iaddr, idata;
    wire [31:0] daddr, drdata, dwdata;
    wire [3:0] we;
    wire [31:0] x31, pc;
	//wire [5:0] opcode;wire [31:0]rf_win;// wire [31:0] imm,rv1,alu_rv2,alu_out,rv2_buff;//test	
    CPU dut (
        .clk(clk),
        .reset(reset),
        .iaddr(iaddr),
        .idata(idata),
        .daddr(daddr),
        .drdata(drdata),
        .dwdata(dwdata),
        .we(we),
        .x31(x31),
        .pc(pc)
		  //.opcode(opcode),.rf_win(rf_win),.imm(imm),.alu_out(alu_out),.rv1(rv1),.alu_rv2(alu_rv2),.rv2_buff(rv2_buff) //test
    );
	 
	 dmem dut1 (.clk(clk),
					.daddr(daddr),
					.dwdata(dwdata),
					.we(we),
					.drdata(drdata)); 
					
	 imem dut2(.iaddr(iaddr),.idata(idata));				
    always #5 clk = !clk;
    initial begin
        clk = 0;
        reset = 1;
        #10
        reset = 0;
    end

endmodule
