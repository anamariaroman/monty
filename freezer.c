#include "monty.h"

/**
 * frezzer - main
 * @stack: pointer
 * Return: exit
*/

void frezzer(stack_t **stack)
{
	stack_t *frees = *stack;
	stack_t *temp;

	if (stack)
	{
		temp = (*stack)->next;
		while (frees)
		{
			free(frees);
			frees = temp;
			if (temp)
				temp = temp->next;
		}
	}
}
