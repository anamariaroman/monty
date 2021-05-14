#include "monty.h"

/**
 * main - main
 * @argc: counter arguments
 * @argv: arguments
 * Return: exit
*/

int main(int argc, char *argv[])
{
	stack_t *head;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;

	open_file(argv[1], &head);

	exit(EXIT_SUCCESS);
}
