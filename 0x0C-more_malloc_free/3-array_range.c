#include <stdlib.h>
#include "main.h"

/**
 * array_range -  function that creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, array;

	if (min > max)
		return (NULL);

	array = max - min + 1;

	ptr = malloc(sizeof(int) * array);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
