#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}

