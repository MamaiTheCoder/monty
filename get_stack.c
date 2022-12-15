#include "monty.h"

/**
 * get_stack - makes list have LIFO behaviour.
 * @stack: pointer to pointer to stack
 * @x: data to add to stack
 *
 * Return: VOID.
 */
void get_stack(stack_t **stack, int x)
{
	stack_t newnode;

	*stack = NULL;

	newnode = malloc(sizeof(stack_t));
	newnode->n = x;
	newnode->next = *stack;
	*stack = newnode;
}
