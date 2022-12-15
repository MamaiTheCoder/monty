#include "monty.h"

/**
 * get_nop - doesn't do anything.
 * @stack: pointer to pointer to stack
 * @line_number: where the line number appears
 *
 * Return: void.
 */
void get_nop(stack_t **stack, unsigned int line_number)
{
	(void) *stack;
	(void) line_number;
}
