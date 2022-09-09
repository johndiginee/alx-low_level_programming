#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nh = 'a';

	while (nh <= 'z')
	{
		if (nh != 'e' && nh != 'q')
		{
			putchar(nh);
		}
	}
	putchar('\n');
	return (0);
}
