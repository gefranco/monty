#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"

int global_variable;

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	FILE *fptr;
	char *line = NULL;
	size_t max = 0;

	fptr = fopen(argv[1], "r");
	char *av;
	char *op_code;

	int i = 1;
	int number = 0;

	stack_t *head = NULL;

	while (getline(&line, &max, fptr) != EOF)
	{
		op_code = NULL;
		op_code = strtok(line, " ");

		av = strtok(NULL, " ");


		if (av)
			number = atoi(av);
		global_variable = number;
		opcodemng(op_code, &head, i);
		i++;
	}
	fclose(fptr);
	free(line);
}
