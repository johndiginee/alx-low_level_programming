#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to find
 *
 * Return: pointer to first matching byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, num;

	for (i = 0; *s != '\0'; i++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (*s == accept[num])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
