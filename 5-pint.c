#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
*_pall - print the stack reverse.
*@stack: Pointer to header of the stack.
*@line_number: line number of the file.
*/
void pint(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp_node = *stack;

	(void) line_number;
	if(*stack==NULL)
	{
		return;
	}

	while (tmp_node->next)
	{

		tmp_node = tmp_node->next;
	}


	printf("%d\n", tmp_node->n);
}
