#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: char type
 * i - integer type
 * j - integer type
 * Return: char type
 */
char *leet(char *str)
{
	int i, j;
	char arr[] = {'a', 'A', '4', 'e', 'E', '3', 'o', '0', 't', 'T', '7', 'l', 'L', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 2; j < arr[j]; j += 3)
		{
			if (str[i] == arr[j - 1] || str[i] == arr[j - 2])
				str[i] = arr[j];
		}
	}
	return (str);
}
