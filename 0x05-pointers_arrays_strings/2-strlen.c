#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string to evalute
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
