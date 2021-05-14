#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer
 * @line_number: number line
 * Return: void
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL && *stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
