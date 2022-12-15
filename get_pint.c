#include "monty.h"

/**
 * get_pint - prints the value at the top of the stack
 * followed by a new line.
 * @stack: pointer to pointer to head of the stack
 * @line_number: where the instructions appear
 *
 * Return: On Success Nothing,
 * On fail, EXIT_FAILURE
 */
void get_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		get_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
