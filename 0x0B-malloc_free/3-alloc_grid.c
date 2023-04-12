#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - function returns pointer to two dimensional array ints
 * @width: width of array
 * @height: height of array
 * Return: pointer to the created matrix (Success), or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int i, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	t = (int **) malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (int *) malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			free(t);
			for (n = 0; n <= i; n++)
				free(t[n]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			t[i][n] = 0;
		}
	}
	return (t);
}
