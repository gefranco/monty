#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"

int _is_number(char *n);
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

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &max, fptr) != EOF)
	{
		op_code = NULL;
		op_code = strtok(line, " \n\t");
		if (strcmp(op_code, "pall") == 0 && i == 1)
		{
			free_stack(head);
			free(line);
			exit(EXIT_FAILURE);
		}

		av = strtok(NULL, " \n\t");

		
		if (strcmp(op_code, "push") == 0 && !av)
		{
			
			fprintf(stderr, "L%d: usage: push integer\n", i);
			free_stack(head);
			free(line);
			exit(EXIT_FAILURE);
		}


		if (strcmp(op_code,"push")==0)
		{
			if(_is_number(av)==0)
			{
				fprintf(stderr, "L%d: usage: push integer\n", i);
				exit(1);	
			}
			else
                	{
                        	number = atoi(av);
                        	global_variable = number;
               		}	
			/*number = atoi(av);
			global_variable = number;*/
		}
		opcodemng(op_code, &head, i);
		i++;
	}
	fclose(fptr);
	free(line);
	free_stack(head);

	exit(EXIT_SUCCESS);
}




int _is_number(char *n)
{
	int i = 0;
	
	
	for(i = 0; n[i]; i++)
	{
		if (n[i] == '-' && i == 0)
            		continue;
		if (isdigit(n[i]) == 0)
		{
			return (0);
		}

	}


	return (1);
}
