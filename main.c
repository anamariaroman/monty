#include "monty.h"

stack_t **global_queue;

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
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	global_queue = &head;

	open_file(argv[1], &head);

	atexit(frezzer);

	exit(EXIT_SUCCESS);
}
