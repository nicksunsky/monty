#include "monty.h"

/**
 * print_stack - Exactly what it looks like. Prints the entire
 * linked list
 * @stack: The stack. Basically a linked list in stack format
 * @line_num: Line number. Not used
 * Return: Nothing. This function cannot fail
 */
void print_stack(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;
	(void) line_num;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
