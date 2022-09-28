#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts__recursions(s + 1);
	}
	else
		_putchar('\n');
}
