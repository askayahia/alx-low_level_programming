#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - function concatenates two strings
 * @s1: string concatenate
 * @s2: another string to concatenate
 *
 * Return: pointer new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *tab;
	unsigned int i = 0, n = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	tab = malloc(sizeof(char) * (len1 + len2 + 1));
	if (tab == NULL)
		return (NULL);

	i = 0;
	n = 0;

	if (s1)
	{
		while (i < len1)
		{
			tab[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			tab[i] = s2[n];
			i++;
			n++;
		}
	}
	tab[i] = '\0';

	return (tab);
}
