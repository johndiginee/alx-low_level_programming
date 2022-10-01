#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
