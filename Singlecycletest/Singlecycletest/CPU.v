module CPU(
    input clk,
    input reset,
    output reg [31:0] iaddr,  // address to instruction memory
    input [31:0] idata,   // data from instruction memory
    output reg[31:0]  daddr,  // address to data memory
    input [31:0] drdata,  // data read from data memory
    output reg[31:0] dwdata, // data to be written to data memory
    output reg[3:0] we,      // write enable signal for each byte of 32-b word
    //output [5:0] opcode,output reg[31:0]rf_win, //output [31:0] imm,output[31:0] rv1,output reg [31:0]alu_rv2, output [31:0]alu_out,output reg [31:0]rv2_buff,//Additional outputs for debugging
    output [31:0] x31,
    output [31:0] pc
);
wire[31:0] imm;
wire [5:0] opcode;
wire [4:0] rs1,rs2,rd;
wire [31:0] rv1;
wire [31:0] rv2;
wire[31:0] alu_out;
reg [31:0] alu_rv2;
reg we_rf;
reg[31:0]rf_win;
reg rv2_buff;

decoder d1(.instr(idata),.rs1(rs1),.rs2(rs2),.rd(rd),.imm(imm),.opcode(opcode));
ALU a1(.in1(rv1),.in2(alu_rv2),.opcode(opcode),.out(alu_out));
rf_file rf1(.x31(x31),.clk(clk),.rs1(rs1),.rs2(rs2),.rd(rd),.we(we_rf),.indata(rf_win),.rv1(rv1),.rv2(rv2));
assign pc = iaddr;

always @(*)begin
//generate alu_rv2
if ((opcode>=4 && opcode <=9) || (opcode>=27) )begin alu_rv2<=rv2; end
else begin alu_rv2<= imm; end
// generate write enable for rf and dmem
if (idata[6:0] == 7'b1100011 || idata[6:0] == 7'b0100011) begin we_rf<= 1'b0; end
else begin we_rf<=1'b1; end
case (opcode)
//WE for store byte
6'b001111 : if (alu_out[1:0] ==2'b00 )begin we<=4'b0001;end
				else if (alu_out[1:0] ==2'b01 )begin we<=4'b0010;end
				else if (alu_out[1:0] ==2'b10 )begin we<=4'b0100;end
				else if (alu_out[1:0] ==2'b11 )begin we<=4'b1000;end
//WE for store half word				
6'b010000 : if (alu_out[1:0] ==2'b00 )begin we<=4'b0011;end
				else if (alu_out[1:0] ==2'b10 )begin we<=4'b1100;end
//We for store word
6'b010001 : we<= 4'b1111; 				
default : we <= 4'b0;
endcase

//Generate write data for register file
	case(opcode)
		6'b000001 : rf_win <= iaddr + imm;
		6'b000010 : rf_win <= iaddr + 4;	
		6'b000011 : rf_win <= iaddr + 4;
		6'b001010 : if (daddr[1:0]==2'b00)rf_win <= {{24{drdata[7]}},drdata[7:0]} ;
						else if (daddr[1:0]==2'b01)rf_win <= {{24{drdata[15]}},drdata[15:8]} ;
						else if (daddr[1:0]==2'b10)rf_win <= {{24{drdata[23]}},drdata[23:16]} ;
						else if (daddr[1:0]==2'b11)rf_win <= {{24{drdata[31]}},drdata[31:24]} ;
		6'b001011 :	if (daddr[1:0]==2'b00)rf_win <= {{16{drdata[15]}},drdata[15:0]} ;
						else if (daddr[1:0]==2'b10)rf_win <= {{16{drdata[31]}},drdata[31:16]} ;
		6'b001100 : rf_win<= drdata;	
		6'b001101 : if (daddr[1:0]==2'b00)rf_win <= {24'b0,drdata[7:0]} ;
						else if (daddr[1:0]==2'b01)rf_win <= {24'b0,drdata[15:8]} ;
						else if (daddr[1:0]==2'b10)rf_win <= {24'b0,drdata[23:16]} ;
						else if (daddr[1:0]==2'b11)rf_win <= {24'b0,drdata[31:24]} ;
		6'b001110 :	if (daddr[1:0]==2'b00)rf_win <= {16'b0,drdata[15:0]} ;
						else if (daddr[1:0]==2'b10)rf_win <= {16'b0,drdata[31:16]} ;		
		default : rf_win <= alu_out;			
	endcase

case(we) 
	4'b0001 : rv2_buff <= rv2;
	4'b0010 : rv2_buff <= rv2 <<8;
	4'b0100 : rv2_buff <= rv2 << 16;
	4'b1000 : rv2_buff <= rv2 << 24;
	4'b0011 : rv2_buff <= rv2;
	4'b1100 : rv2_buff <= rv2 << 16;
	4'b1111 : rv2_buff <= rv2 ;
endcase

dwdata<= rv2;//DMEM write data
daddr<= alu_out;//DMEM address	
end

//GENERATE NEXT IADDR
always @(posedge clk )
begin 
	if (reset == 1'b0)begin 
	case (opcode)
		6'b000010 : iaddr <= iaddr + imm;
		6'b000011 : iaddr <= rv1+ imm;
		6'b000100 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		6'b000101 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		6'b000110 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		6'b000111 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		6'b001000 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		6'b001001 : if (alu_out==32'b1)begin iaddr<= iaddr + imm;end 
						else begin iaddr<= iaddr +4;end
		default : iaddr <= iaddr + 4;
	endcase
	end
	else begin iaddr <= 32'b0;end
end

endmodule 