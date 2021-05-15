#include "monty.h"

/**
 * _mul - multiplies the second top element of the stack by the top element
 * @stack: top of the stack.
 * @line_number: line_number.
 * Return - nothing.
*/

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	int mul;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	mul = aux->next->n * aux->n;
	aux->next->n = mul;

	*stack = aux->next;
	free(aux);
}
