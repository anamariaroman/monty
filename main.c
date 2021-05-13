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

	head = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_line(argv[1], &head);
}
