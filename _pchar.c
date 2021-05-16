#include "monty.h"

/**
 * _pchar - print char top element of the stack
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _pchar(stack_t **stack, unsigned int line_number)
{
	int caracter;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	caracter = (*stack)->n;

	if (!isascii(caracter))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", caracter);
}
