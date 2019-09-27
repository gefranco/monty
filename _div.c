#include "monty.h"
/**
 *_div - function divides the second top element of the stack.
 *@stack: top of the stack.
 *@line_number:of the line in the .m file.
 */
void _div(stack_t **stack, unsigned int line_number)
{

	stack_t *x, *other;
	
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(STDERR_FILENO,"L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	x = *stack;
	x = x->next;
	x->n /= (*stack)->n;
	x->prev = NULL;
	other = *stack;
	*stack = x;
	free(other);
}
