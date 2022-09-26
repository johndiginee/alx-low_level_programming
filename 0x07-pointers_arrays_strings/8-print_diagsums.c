#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: 2d int array representing sqaure matrix
 * @size: the size*size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, num1 = 0, num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += *(a + size * i + i);
		num2 += *(a + size * (i + 1) - i - 1);
	}
	printf("%d, %d\n", num1, num2);
}
