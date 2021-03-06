#include "monty.h"

/**
 * is_digit - checks if a str is a digit
 * @str: str to check
 * Return: 1 if success, 0 if not
*/

int is_digit(char *str)
{
	if (!str || *str == '\0')
		return (0);

	if (*str == '-')
		str++;

	while (*str)
	{
		if (isdigit(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
