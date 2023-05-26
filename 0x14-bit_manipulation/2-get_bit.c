#include "main.h"
/**
 * get_bit - To get values of a bit at a given index!
 * @n: It means numbers to a check.
 * @index: index of that bit to get!
 * Return: -1 if an error occurred or Value of Bit at the given index!
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
