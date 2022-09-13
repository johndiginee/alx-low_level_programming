#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
  * followed by a new line
  * Return: Always 0 (Success)
  */
int main(void)
{
	long int i, num1, num2, next;

	num1 = 1;

	num2 = 2;

	for (i = 1; i <= 50; i++)
	{
		if (num1 != 20365011074)
		{
			printf("%ld, ", num1);
		} else
		{
			printf("%ld\n", num1);
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	return (0);
}
