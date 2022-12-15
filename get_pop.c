#include "monty.h"

/**
 * get_pop - removes the top element of the stack.
 * @stack: pointer to pointer  to the stack
 * @line_number: where instructions appear
 *
 * Return: On Success, Nothing,
 * On fail, EXIT_FAILURE.
 */
void get_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *first;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	*stack = (*stack)->next;

	if (first->next)
	{
		first->next->prev = NULL;
	}
	free(first);
}
