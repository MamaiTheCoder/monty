#include "monty.h"

/**
 * get_pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: pointer to pointer to stack.
 * @line_number: where the instruction appears.
 *
 * Return: On Success, nothing,
 * On Fail, EXIT_FAILURE
 */
void get_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node;

	top_node = *stack;
	(void)line_number;

	if ((stack == NULL) || (*stack == NULL))
	{
		printf("\n");
	}
	else
	{
		while (top_node != NULL)
		{
			if ((top_node->n > 0) && (isascii(top_node->n)))
			{
				printf("%c", top_node->n);
				top_node = top_node->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
