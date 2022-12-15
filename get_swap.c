#include "monty.h"

/**
 * get_swap - swaps the top two elements of the stack
 * @stack: pointer to pointer to stack
 * @line_number: where the line number appears
 *
 * Return: On Success, nothing,
 * On fail, EXIT_FAILURE.
 */
void get_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if (*stack)
	{
		first = *stack;
		second = first->next;
		*stack = second;
		first->next = second->next;

		if (second->next != NULL)
		{
			second->next->prev = first;
		}
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}
}
