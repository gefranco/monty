#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
*_pall - print the stack reverse.
*@stack: Pointer to header of the stack.
*@line_number: line number of the file.
*/
void _pall(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp_node = *stack;

	(void) line_number;
	while (tmp_node != NULL)
	{
		printf("%d\n", tmp_node->n);
		tmp_node = tmp_node->next;
	}

}
