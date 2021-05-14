#include "monty.h"


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
