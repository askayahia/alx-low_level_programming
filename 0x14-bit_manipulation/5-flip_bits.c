#include "main.h"
/**
 * flip_bits - To return Number of bits you need to flip to get from
 * the number to the other!
 * @n: Unsigned long integer value 1
 * @m: unsigned long integer value 2.
 * Return: It is the Number of bits you need to flip to get from a number
 * to another!
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_to_flip = n ^ m; /* XOR to get bits that differ */
	unsigned int count = 0;

	while (bits_to_flip)
	{
		count += bits_to_flip & 1; /* count bits set to 1 */
		bits_to_flip >>= 1; /* shift right to check the next bit */
	}

	return (count);
}
