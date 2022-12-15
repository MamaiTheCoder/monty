#include "monty.h"
#include <ctype.h>
/**
 * get_pchar - prints the char at the top of the stack,
 * followed by a new line.
 * @stack: pointer to pointer to stack
 * @line_number: where number will appear
 *
 * Return: On Success, NOTHING,
 * On Fail, EXIT_FAILURE.
 */
void get_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*stack)->n);
}
