#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

	void main()
  {
 

  FILE *opcode,*input,*assemblyD,*output;
  opcode = fopen("opcode.txt", "r");   //opening file to read
  input = fopen("input.txt", "r");
  assemblyD = fopen("assemblyD.txt","r");
  output = fopen("output.txt","w");
	
	
	fgets(assemblyDer,80,assemblyD);
	
	populateOpcodeTable(opcode);

	parseThrough(input);
	rewind(input);
	
	pass2(input);
	rewind(input);
	symbol_list();
	pass2Address(input);
	rewind(input);

	

	ObjFile(input,output);

	fclose(opcode);
	fclose(input);
	fclose(assemblyD);
	fclose(output);

	
  
 

  
  

  }
  
