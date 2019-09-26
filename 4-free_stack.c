#include<stdlib.h>
#include "monty.h"
/**
 * free_dlistint - free a double linked list
 * @head: the header of the list
 */
void free_stack(stack_t *head)
{
	stack_t *tmp_node;

	while (head)
	{

		tmp_node = head->next;

		free(head);

		head = tmp_node;
	}
}
