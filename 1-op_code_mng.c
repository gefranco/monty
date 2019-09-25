#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
int opcodemng(char *opcode, stack_t **stack, unsigned int line_number)
{

	
	//printf("opcodemng: %s\n", opcode);
	
	int i = 0;
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", _pall},
		/*{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},*/
		{NULL, NULL}
	};



	/*if (strcmp(opcode,"push")==0)
	{
		//printf("calling push\n");
	
		push(stack, line_number);
	}

	else if (strcmp(opcode,"pall\n")==0) 
	{

		//printf("calling pall\n");
		
		_pall(stack, line_number);


	}*/
	while (opcodes[i].opcode)
	{
		if (strcmp(opcodes[i].opcode, opcode) == 0)
			 (opcodes[i].f(stack, line_number));
		i++;
	}




}




int mainopcode(void)
{

}
