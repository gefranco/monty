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
	int number;
	int i = 0;

	while (tmp_node->next)
	{

		tmp_node = tmp_node->next;
	}

	while (tmp_node->prev)
	{
		printf("%d\n", tmp_node->n);
		tmp_node = tmp_node->prev;
	}

	printf("%d\n", tmp_node->n);
}
