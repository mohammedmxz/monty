#include "monty.h"

/**
 * execute - Execute line of monty byte code
 * @lineptr: The line to execute
 * @stack: A pointer to the head node of a stack
 * @line_number: The line number of the instruction
 */
void execute(char *lineptr, stack_t **stack, unsigned int line_number)
{
	char *token;
	int element;
	void (*handler)(stack_t **, unsigned int);

	token = strtok(lineptr, " \n");
	if (token == NULL || strcmp(token, "nop") == 0 || token[0] == '#')
		return;
	if (strcmp(token, "stack") == 0 || strcmp(token, "queue") == 0)
	{
		format = format == STACK ? QUEUE : STACK;
		return;
	}
	if (strcmp(token, "push") == 0)
	{
		token = strtok(NULL, " \n");
		if (token != NULL)
		{
			element = atoi(token);
			if (element != 0 || is_zeroes(token))
			{
				push(stack, element);
				return;
			}
		}
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit_code = EXIT_FAILURE;
		return;
	}
	handler = get_handler(token);
	if (handler == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		exit_code = EXIT_FAILURE;
		return;
	}
	handler(stack, line_number);
}
