#include "monty.h"

/**
 * _push - adds the new node in the stack.
 * @stack: top of the stack.
 * @count: line_number.
 */
void _push(stack_t **stack, unsigned int count)
{
	int a;

	if (!global_queue)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		global_queue = "error";
		return;
	}
	for (a = 0; global_queue[a] != '\0'; a++)
	{
		if (global_queue[0] == '-' && a == 0)
			a++;
		if (global_queue[a] < '0' || global_queue[a] > '9')

			fprintf(stderr, "L%d: usage: push integer\n", count);
			global_queue = "error";
			return;

	}
	stack_queue(&(*stack));
}
