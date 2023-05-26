#include "main.h"
/**
 * set_bit - Values of a bit set at given index!
 * @n: Modify numbers!
 * @index: set the index of a bit
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
