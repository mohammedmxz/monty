#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @stack: A pointer to the head node of the stack
 * @line_number: The current line number
 */
void rotr(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
	stack_t *head, *tail;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	head = *stack;
	tail = *stack;

	while (tail->next != NULL)
		tail = tail->next;

	*stack = tail;
	tail->prev->next = NULL;
	tail->prev = NULL;
	tail->next = head;
	head->prev = tail;
}
