#include "monty.h"

/**
 * open_file - read file
 * @file:  file
 * @stack: doble pointer te stack
 * Return: no se
*/

void open_file(char *file, stack_t **stack)
{
	size_t sizebuff;
	ssize_t read_line;
	unsigned int count = 0;
	char *line = NULL;
	FILE *arch;
	char *command;

	arch = fopen(file, "r");
	if (!arch)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((read_line = getline(&line, &sizebuff, arch)) != -1)
	{
		command = strtok(line, " \n\r\t");
		count++;

		commands(stack, command, count);
	}

	free(line);
	fclose(arch);
}
