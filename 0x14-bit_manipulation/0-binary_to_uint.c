#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - To convert a Binary number to an unsigned integer!
 * @b: A string that contains a binary number!
 * Return: a converted number or 0 if there's one or more chars
 * in the string b that is not 0 or 1 or whether b is NULL!!
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		result += (*b - '0');
		b++;
	}

	return (result);
}
