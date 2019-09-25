#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "monty.h"
int global_variable;
int main(int argc, char *argv[])
{
	(void)argc;
	//int global_variable;
 	FILE *fptr;
       // char filename[] = argv[1];
	
	//"./bytecodes/00.m";
        
	char *line = NULL;
        size_t max = 0;

        fptr = fopen(argv[1], "r");
	
	char *av;
	char *op_code;

	int i = 1;
	
	int number = 0;

	stack_t *head = NULL;

        while(getline(&line, &max, fptr) != EOF)
        {
                //printf("%s", line);

	        op_code = NULL;
        	op_code = strtok(line, " ");
               
		//printf("%s ",op_code);

		
		av = strtok(NULL, " ");//save the number as a global variable
		


		if(av)
                	number = atoi(av);
		
		//printf("%d ",number);
                global_variable = number;
			
		opcodemng(op_code,&head, i);	

	//	printf("the operation:::%s\n",av);//the operation
		
		


		//av = strtok(NULL, " ");
		//save the number as a global variable
                
		//number = atoi(av);

		//global_variable = number;
		//printf("--->%s\n", av);
		

		//int res = strcmp(av, "push");

		//printf("%d\n", res);
		//

		i++;
        }

        fclose(fptr);

        free(line);







/*
	int line_number = 0;

	char *line;

	while((line=readline(0, "./bytecodes/00.m")) =! EOF)
	{



		//
		//
		//
		//
	}
*/
	

}

