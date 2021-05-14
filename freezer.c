#include "monty.h"

/**
 * frezzer - main
 * Return: exit
*/

void frezzer(void)
{
	stack_t *frees;
	stack_t *temp = NULL;

	frees = *global_queue;

	while (frees)
	{
		temp = frees->next;

		free(frees);

		frees = temp;
	}
}
