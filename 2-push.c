#include "monty.h"

int global_variable;

/**
*push - Add a new node.
*@stack: Pointer to the header of the stack.
*@line_number: Line number of the file.
*/
void push(stack_t **stack, unsigned int line_number)
{
	int number;

	number = global_variable;

	(void) line_number;


	if (*stack == NULL)
	{
		*stack = malloc(sizeof(stack_t));
		if (*stack == NULL)
			return;
		(*stack)->n = number;
		(*stack)->next = NULL;
		return;
	}


	(*stack)->prev = malloc(sizeof(stack_t));
	if ((*stack)->prev == NULL)
		return;
	((*stack)->prev->n) = number;

	((*stack)->prev->next) = *stack;

	*stack = (*stack)->prev;

}
