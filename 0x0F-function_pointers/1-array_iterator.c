#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes function given
 * as parameter on each element of an array
 * @array: array to execute function
 * @size: size of the array
 * @action: a pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array && action)
	{
		n = 0;
		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
}
