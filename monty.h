#ifndef MONTY_H
#define MONTY_H

#define STACK 1
#define QUEUE 0

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

ssize_t _getline(char **lineptr, int fd);
void push(stack_t **stack_t, unsigned int element);
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number);
void free_stack(stack_t *stack);
ssize_t _getline(char **lineptr, int fd);
void (*get_handler(char *opcode))(stack_t **, unsigned int);
int is_zeroes(char *str);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int __attribute__((unused)) line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int __attribute__((unused)) line_number);
void rotr(stack_t **stack, unsigned int __attribute__((unused)) line_number);

extern int exit_code;
extern int format;

#endif
