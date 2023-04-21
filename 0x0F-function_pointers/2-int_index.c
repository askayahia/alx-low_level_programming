#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search integer
 * @size: size of array
 * @cmp: pointer to compare values
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		while (n < size)
		{
			if (cmp(array[n]))
				return (n);
			n++;
		}
	}
	return (-1);
}
