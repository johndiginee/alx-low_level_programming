#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num, c = 0, COINS[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	num = atoi(argv[1]);
	if (num < 0)
		return (puts("0"), 1);
	for (i = 0; i < 5; i++)
		if (num / COINS[i])
		{
			c += num / COINS[i];
			num %= COINS[i];
		}
	printf("%d\n", c);
	return (0);
}
