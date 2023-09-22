#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: A pointer to the head node of the stack
 * @line_number: The current line_number
 */
void rotl(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *head, *tail;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	head = *stack;
	tail = *stack;

	while (tail->next != NULL)
		tail = tail->next;

	*stack = (*stack)->next;
	head->next->prev = NULL;
	head->next = NULL;
	head->prev = tail;
	tail->next = head;
}
