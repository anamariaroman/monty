#include "monty.h"
/**
 * _pall - prints the stack values .
 * @stack: head.
 * @line_number: line_number.
*/

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	aux = *stack;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}

	(void) line_number;
}
