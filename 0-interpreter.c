#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"
int is_number(char *n,int line);

int global_variable;

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer string
 * Return: 0
 */

int main(int argc, char *argv[])
{

	FILE *fptr;
	char *line = NULL;
	size_t max = 0;

	char *av;
	char *op_code;

	int i = 1;
	int number = 0;

	stack_t *head = NULL;

	(void) argc;


	fptr = fopen(argv[1], "r");
	while (getline(&line, &max, fptr) != EOF)
	{
		op_code = NULL;
		op_code = strtok(line, " ");
			
		if (strcmp(op_code, "pall\n") == 0 && i == 1)
		{
			free_stack(head);
                        exit(EXIT_FAILURE);
		}


		av = strtok(NULL, " ");
		if (strcmp(op_code, "push\n") == 0)
		{
                        fprintf(stderr,"L%d: usage: push integer\n",i);
			free_stack(head);
			exit(EXIT_FAILURE);
		}


		if (av && is_number(av,i))
			number = atoi(av);
		global_variable = number;
		opcodemng(op_code, &head, i);
		i++;
	}
	fclose(fptr);
	free(line);
	free_stack(head);

	exit(EXIT_SUCCESS);
}

int is_number(char *n, int line)
{
	
	int i = 0;
	(void)line;
	while(n[i]!='\n')
	{	
        	if (!isdigit(n[i]))
        	{
            		fprintf(stderr,"L%d: usage: push integer\n",line);
            		exit(EXIT_FAILURE);
        	}
		i++;
	}


	return (1);
}

