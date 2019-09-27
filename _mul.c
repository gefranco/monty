#include "monty.h"

/**
*mul - multiplies the second top element of the stack with the top element.
*@stack: Pointer to header of the stack.
*@line_number: Line number of the file.
*/

void _mul(stack_t **stack, unsigned int line_number)
{

	stack_t  *x, *other;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO,
			"L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	x = *stack;
	x = x->next;
	x->n *= (*stack)->n;
	x->prev = NULL;
	other = *stack;
	*stack = x;
	free(other);
}
