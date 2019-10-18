`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:34:53 09/10/2019 
// Design Name: 
// Module Name:    dmem 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module dmem(input clk,input wire [31:0]addr,input wire [31:0] indata, input wire [3:0] we,output reg [31:0] outdata
    );
reg [7:0] mem1 [0:1023];reg [7:0] mem2 [0:1023];reg [7:0] mem3 [0:1023];reg [7:0] mem4 [0:1023];

always @(posedge clk)
begin
	if (we[0] == 1'b1)
		begin
			mem1[addr[11:2]] <= indata[7:0];
		end
	if (we[1] == 1'b1)
		begin
			mem2[addr[11:2]] <= indata[15:8];
		end
	if (we[2] == 1'b1)
		begin
			mem3[addr[11:2]] <= indata[23:16];
		end
	if (we[3] == 1'b1)
		begin
			mem4[addr[11:2]] <= indata[31:24];
		end
	outdata[7:0] <= mem1[addr[11:2]];outdata[15:8] <= mem2[addr[11:2]];outdata[23:16] <= mem3[addr[11:2]];outdata[31:24] <= mem4[addr[11:2]];	
end
endmodule
