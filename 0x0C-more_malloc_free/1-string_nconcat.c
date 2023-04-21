#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two string
 * @s1: first string
 * @s2: second string to concatenate
 * @n: unsigned int
 * Return: NULL, if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, q;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (q = 0; q < i; q++)
		s[q] = s1[q];
	for (q = 0; q < j; q++)
		s[q + i] = s2[q];
	s[i + j] = '\0';
	return (s);
}
