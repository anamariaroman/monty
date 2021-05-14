#include "monty.h"

/**
 * _push - adds the new node in the stack.
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _push(stack_t **stack, unsigned int line_number)
{
	char *n;
	stack_t *node;

	n = strtok(NULL, " \n\r\t");
	if (n == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(n);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
	{
		(*stack)->prev = node;
	}

	*stack = node;
}
