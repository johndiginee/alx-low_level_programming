#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Sucees)
 */
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
