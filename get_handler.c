#include "monty.h"

/**
 * get_handler - Get the function to perform an opreation
 * @opcode: The operation code
 * Return: A pointer to a function to perforn the operation,
 * or NULL if @opcode cannot  be found
 */
void (*get_handler(char *opcode))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t handler[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"NULL", NULL}
	};

	while (handler[i].f != NULL)
	{
		if (strcmp(opcode, handler[i].opcode) == 0)
			return (handler[i].f);

		i++;
	}

	return (NULL);
}
