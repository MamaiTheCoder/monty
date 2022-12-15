#include "monty.h"

/**
 * get_mul - multiplies second top element of stack
 * with the top element of the stack.
 * @stack: point to pointer to stack
 * @line_number: where line number appears
 *
 * Return: On Success, NOTHING,
 * On Fail, EXIT_FAILURE.
 */
void get_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	first = *stack;
	second = first->next;
	second->n *= first->n;
	*stack = second;
	(*stack)->prev = NULL;
	free(first);
}
