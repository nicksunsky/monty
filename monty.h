#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/**
 * DELIMIT - Delimiter for strtok
 */
#define DELIMIT " \n\t"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t **global_head;
void read_file(char *, stack_t **);
void line_interpreter(stack_t **, char *, unsigned int);
void free_them_all(void);
void push_to_stack(stack_t **, unsigned int);
int digit_checker(char *);
void print_stack(stack_t **, unsigned int);
void print_int(stack_t **, unsigned int);
void Poppin_Party(stack_t **, unsigned int);
void swap(stack_t **, unsigned int);
void addition(stack_t **, unsigned int);
void nope(stack_t **, unsigned int);
void subtraction(stack_t **, unsigned int);
void division(stack_t **, unsigned int);
void multiplication(stack_t **, unsigned int);
void modulo_op(stack_t **, unsigned int);
void print_char(stack_t **, unsigned int);
void print_string(stack_t **, unsigned int);
void rotate_last(stack_t **, unsigned int);
void rotate_first(stack_t **, unsigned int);

#endif
