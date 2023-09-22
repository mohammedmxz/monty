#include "monty.h"

/**
 * is_zeroes - Check if a string contains only zeroes
 * @str: The string
 * Return: 1 if @str contains only zeroes else 0
 */
int is_zeroes(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] != '0')
			return (0);

	return (1);
}
