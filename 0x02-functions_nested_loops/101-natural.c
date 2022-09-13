#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples
  * of 3 or 5 below 1024
  * Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long int num3, num5, sum;
	int i;

	num3 = 0;
	num5 = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			num3 = num3 + i;
		} else if ((i % 5) == 0)
		{
			num5 = num5 + i;
		}
	}
	sum = num3 + num5;
	printf("%lu\n", sum);
	return (0);
}
