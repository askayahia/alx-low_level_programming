#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with call malloc
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size
 * Return: pointer allocate new size memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int x, y = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);
	if (new_size > old_size)
		y = old_size;
	for (x = 0; x < y; x++)
		pt[x] = oldp[x];
	free(ptr);
	return (pt);
}
