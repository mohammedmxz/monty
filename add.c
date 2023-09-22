#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: A pointer to the head node of the stack
 * @line_number: The current line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit_code = EXIT_FAILURE;
		return;
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
