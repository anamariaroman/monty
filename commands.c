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
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"div",_div},
		{"mod", _mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(op, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_num);
			return;
		}
	}

	if (strlen(op) != 0 && op[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, op);
		exit(EXIT_FAILURE);
	}
}
