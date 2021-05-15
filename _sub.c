#include "monty.h"

/**
 * _sub - adds the new node in the stack.
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int resta;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	resta = aux->next->n - aux->n;
	aux->next->n = resta;

	*stack = aux->next;
	free(aux);
}
