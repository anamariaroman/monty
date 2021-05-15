#include "monty.h"

/**
 * _swap - adds the new node in the stack.
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	aux = (*stack)->next;

	(*stack)->prev = aux;
	(*stack)->next = aux->next;

	aux->prev = NULL;

	if (aux->next)
	{
		aux->next->prev = *stack;
	}

	aux->next = *stack;
	*stack = aux;
}
