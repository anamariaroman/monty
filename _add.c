#include "monty.h"

/**
 * _add - adds the new node in the stack.
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int suma;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	suma = aux->n + aux->next->n;
	aux->next->n = suma;

	*stack = aux->next;
	free(aux);
}
