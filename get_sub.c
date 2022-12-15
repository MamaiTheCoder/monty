#include "monty.h"

/**
 * get_sub - subtracts the top element of the stack from
 * the second top element of the stack.
 * @stack: pointer to pointer to DLL.
 * @line_number: where the line number appears.
 *
 * Return: On Success, NOTHING,
 * On fail, EXIT_FAILURE.
 */
void get_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n -= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
