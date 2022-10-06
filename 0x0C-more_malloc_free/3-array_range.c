#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates array of integers
 * @min: the smallest integer
 * @max: the largest integer
 *
 * Return: int pointer to array
 */
int *array_range(int min, int max)
{
	int *p, num;

	if (min > max)
		return (NULL);
	num = max - min + 1;
	p = malloc(sizeof(*p) * num);
	if (!p)
		return (NULL);
	while (num--)
		p[num] = max--;
	return (p);
}
