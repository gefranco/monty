#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

int global_variable;
void push(stack_t **stack, unsigned int line_number)
{



	stack_t *tmp_node = *stack;

	stack_t *node;

	int number;

	int i = 1;


	/*char *line = readline(line_number);

	char *av;
	
	int number;

	int i = 0;
	av = NULL;
	av = strtok(line, " ");
	while (av)
	{
		printf(av);
		//args[i] = av;
		av = strtok(NULL, " ");
		i++;
	}
*/

//	printf("line number %d\n",line_number);

	number = global_variable;

	if (line_number == 1)//first intruction
	{
//		printf("inserting new node");
		*stack = malloc(sizeof(stack_t)); 
		(*stack)->n = number;
		(*stack)->next = NULL;
		(*stack)->prev = NULL;

		//*stack = node;

		//_pall(stack, line_number);
		return;
	}
	
	tmp_node = *stack;

	while(tmp_node->next)
//	for (i = 2; i < line_number; i++)
	{
		//node = malloc(sizeof(stack_t));
		tmp_node = tmp_node->next;

	}
	
//	printf("inserting other node %d \n", number);
	tmp_node->next = malloc(sizeof(stack_t));
	tmp_node->next->n = number;
	tmp_node->next->next = NULL;
	tmp_node->next->prev = tmp_node;
	

	//tmp_node->next = node;
	

	//printf("line_number %d",line_number);	
//	_pall(stack, line_number);

}

int main2(void)
{



	

}
