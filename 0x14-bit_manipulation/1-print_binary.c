#include "main.h"
/**
 * print_binary - It prints binary Equivalent of a decimal number.
 * @n: The Number to print in binary!
 *
 */
void print_binary(unsigned long int n)
{
	int y, counter = 0;
	unsigned long int current;

	for (y = 63; y >= 0; y--)
	{
		current = n >> y;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
