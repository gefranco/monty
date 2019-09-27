#include "monty.h"

/**
*_sub - Function subtracts the top element of the stack form the second.
*@stack: Pointer to header of the stack.
*@line_number: Line number of the file
*
*/
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *other;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't sub, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	tmp = tmp->next;
	tmp->n -= (*stack)->n;
	tmp->prev = NULL;
	other = *stack;
	*stack = tmp;
	free(other);
}
