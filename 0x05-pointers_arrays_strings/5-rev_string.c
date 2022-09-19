#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char smp;
	int i, num, num2;

	num = 0;
	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	num2 = num - 1;

	for (i = 0; i < num / 2; i++)
	{
		smp = s[i];
		s[i] = s[num2];
		s[num2--] = smp;
	}
}
