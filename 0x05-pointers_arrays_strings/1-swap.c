#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to first value(a)
 * @b: pointer to second value(b)
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
