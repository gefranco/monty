#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * opcodemng - Chek the opcodem and return according to the opcodem.
 *@opcode: String of the opcodem.
 *@stack: Pointer to heder stack.
 *@line_number: Line to file.
 *Return: ntg
 */
int opcodemng(char *opcode, stack_t **stack, unsigned int line_number)
{

	int i = 0;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", _pall},
		{"pint", pint},
		{"pop", pop},
		{"add", _add},
		{"nop", nop},
		{"swap", swap},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{NULL, NULL}
	};


	while (opcodes[i].opcode)
	{
		if (strcmp(opcodes[i].opcode, opcode) == 0)
		{
			(opcodes[i].f(stack, line_number));
			return (0);
		}

		i++;
	}
	return (-1);
}
