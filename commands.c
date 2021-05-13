#include "monty.h"

/**
 * commands - commands from line op
 * @stack: the pointer to the head of the stack
 * @op: the line with commands/instructions
 * @line_num: number
 * Return: void
*/

void commands(stack_t **stack, char *op, unsigned int line_num)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	if (strlen(op) != 0 && op[0] != '#')
	{
		printf("L%u: unknown instruction %s\n", line_num, op);
		exit(EXIT_FAILURE);
	}
}
