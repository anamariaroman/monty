#include "monty.h"

/**
 * _pchar - print char top element of the stack
 * @stack: top of the stack.
 * @line_number: line_number.
*/

void _pchar(stack_t **stack, unsigned int line_number)
{
	int num;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = (*stack)->n;

	if (num < 0 || num > 127)
	{
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", num);
}
