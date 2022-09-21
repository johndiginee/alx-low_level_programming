#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char type
 * @src: char type
 * i - integer type
 * j - integer type
 * Return: char type
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '0\';
	return (dest);
}

