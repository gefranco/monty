#include "monty.h"

/**
*pint - print the stack reverse.
*@stack: Pointer to header of the stack.
*@line_number: line number of the file.
*/
void pint(stack_t **stack, unsigned int line_number)
{

	stack_t *tmp_node = *stack;

	if (*stack == NULL)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pint, stack empty\n",
			line_number);
		free(stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp_node->n);
}
