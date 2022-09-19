#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, x, y;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	y = i;

	for (x = y - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
