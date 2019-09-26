#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
*pop - print the stack reverse.
*@stack: Pointer to header of the stack.
*@line_number: line number of the file.
*/
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp_node = *stack;

	if (*stack == NULL)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pop an empty stack\n",
			line_number);
	}
	if (tmp_node->next)
	{
		*stack = tmp_node->next;
		tmp_node = NULL;
	}
	else
	{

		free(*stack);
		*stack = NULL;
	}
}
