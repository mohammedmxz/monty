#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: A pointer to the head node of the stack
 * @line_number: The current line number
 */
void pop(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit_code = EXIT_FAILURE;
		return;
	}

	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
