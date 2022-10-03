#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenaste two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *ret;

	while (s1 && *s1++)
		len1++;
	while (s2 && *s2++)
		len2++;
	ret = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ret)
		return (NULL);
	ret += len1 + len2;
	*ret = '\0';
	for (s2--; len2--;)
		*--ret = *--s2;
	for (s1--; len1--;)
		*--ret = *--s1;
	return (ret);
}
