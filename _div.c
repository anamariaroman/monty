#include "monty.h"

/**
 * _div - divides the second top element of the stack
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int division;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;

	if (aux->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	division = aux->next->n / aux->n;
	aux->next->n = division;

	*stack = aux->next;

	free(aux);
}
