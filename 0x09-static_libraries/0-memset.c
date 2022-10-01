#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the buffer
 * @b: the constant byte
 * @n: size of buffer to fill
 *
 * Return: pointer to destination buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
