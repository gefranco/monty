#include <stdlib.h>
#include <stdio.h>
#include "monty.h"


void _pall(stack_t **stack, unsigned int line_number)
{

	//printf("***********PALL ");

	stack_t *tmp_node = *stack;


	int number;

	int i = 0;


	while(tmp_node->next)
	{
	//	printf("%d\n",tmp_node->n);

		tmp_node = tmp_node->next;
	}

	
	

	while(tmp_node->prev)
	{	
		printf("%d\n",tmp_node->n);
		tmp_node = tmp_node->prev;
	}
	
	printf("%d\n",tmp_node->n);
}

