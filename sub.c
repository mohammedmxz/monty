#include "monty.h"

/**
 * sub - Subtracts the top element of the stack
 * from the second top element of the stack.
 * @stack: A pointer to the head node of the stack
 * @line_number: The current line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit_code = EXIT_FAILURE;
		return;
	}

	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
