#include "main.h"

/**
 * _memset - function fill a memory with a specific value
 * @s: pointer area memory
 * @b: desired value
 * @n: number bytes to be changed
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}

	return (s);
}
