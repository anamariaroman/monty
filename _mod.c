#include "monty.h"

/**
 * _mod - module the second top element of the stack
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int modulo;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;

	if (aux->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	modulo = aux->next->n % aux->n;
	aux->next->n = modulo;

	*stack = aux->next;

	free(aux);
}
