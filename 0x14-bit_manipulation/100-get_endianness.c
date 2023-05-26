#include "main.h"
/**
 * get_endianness - it does check endianness of the system!
 * Return: 1 if little endian or 0 if big endian!
 */
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
