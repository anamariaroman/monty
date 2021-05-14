#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: double pointer
 * @line_number: number line
 * Return: void
*/

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	*stack = (*stack)->next;

	free(aux);
}
