#include "main.h"
/**
 * clear_bit - It does set values of a bit to 0 at the given index!
 * @n: Pointer to Numbers!
 * @index: It starts from 0 of bits you wish to set!
 *
 * Return: 1 if successful, -1 if there is error!
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* check if index is valid */
	return (-1);

	*n &= ~(1 << index); /* set bit at index to 0 */

	return (1);
}
