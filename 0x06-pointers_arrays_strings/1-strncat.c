#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char type
 * @src: char type
 * @n: integer type
 * i - integer type
 * j - integer type
 * Return: char type
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; i++; j++)
		dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}

