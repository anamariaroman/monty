#include "monty.h"
/**
 * _pall - prints the stack values .
 * @stack: head.
 * @count: line_number.
 */
void _pall(stack_t **stack, unsigned int count __attribute__((unused)))
{
	stack_t *aux = *stack;

	if (*stack == NULL)
		return;
	aux = *stack;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
