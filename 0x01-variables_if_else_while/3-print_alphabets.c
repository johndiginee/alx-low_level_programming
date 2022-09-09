#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
