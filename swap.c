#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: A pointer to the head of the stack
 * @line_number: The current line number
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit_code = EXIT_FAILURE;
		return;
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
