#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 *_add - function that adds the top two elements of the stack.
 *@stack: Pointer to header of the stack.
 *@line_number: Line number of the file
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp_node;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (tmp_node->next)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->n += tmp_node->prev->n;
	tmp_node->prev->prev->next = tmp_node;
	tmp_node->prev = tmp_node->prev->prev;
}
