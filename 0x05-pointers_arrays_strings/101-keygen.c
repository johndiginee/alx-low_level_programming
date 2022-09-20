#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SUM 2772

/**
 * main - it all starts here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, num = 0, i = 0;
	char str[100];

	srand(time(NULL));
	while (sum < SUM)
	{
		if (SUM - sum < 48)
			sum -= str[--i];
		else if (SUM -sum <= 126)
			num = SUM - sum;
		else
			num = rand() % (126 - 48) + 48;
		if (num)
		{
			str[i++] = num;
			sum += num;
		}
		num = 0;
	}
	str[i] = '\0';
	printf("%s", str);
	return (0);
}
