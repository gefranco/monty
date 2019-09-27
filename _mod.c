#include "monty.h"

/**
*_mod - Function computes the rest of the division of the second element.
*@stack: Pointer to header of the stack
*@line_number: Line number ofthe file
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t  *x, *other;

	if (*stack == NULL || (*stack)->next == NULL)

	{
		dprintf(STDERR_FILENO,
			"L%d:can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}

	x = *stack;
	x = x->next;
	x->n %= (*stack)->n;
	x->prev = NULL;
	other = *stack;
	*stack = x;
	free(other);
}
