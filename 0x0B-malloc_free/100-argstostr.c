#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function concatenates all the arguments of program
 * @ac: arguments count
 * @av: pointer array
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *concat, *t;
	int i, n, q, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		t = av[i];
		n = 0;

		while (t[n++])
			len++;
		len++;
	}

	concat = (char *)malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0, n = 0; i < ac && n < len; i++)
	{
		t = av[i];
		q = 0;

		while (t[q])
		{
			concat[n] = t[q];
			q++;
			n++;
		}
		concat[n++] = '\n';
	}
	concat[n] = '\0';

	return (concat);
}
