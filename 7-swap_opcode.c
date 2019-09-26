#include "monty.h"

/**
 *swap - function the top two elements of the stack.
 *@stack: Pointer to header of the stack
 *@line_number: Line number of the file.
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp_node = *stack;
	stack_t *tmp_node2;
	if(*stack == NULL)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't swap, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	tmp_node2 = tmp_node->next;
	tmp_node->next->prev = NULL;
	tmp_node->next = tmp_node->next->next;
	/*tmp_node = tmp_node->next->next;*/
	tmp_node2->next = tmp_node;
	*stack = tmp_node2;
}
