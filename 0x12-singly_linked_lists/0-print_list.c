#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function pint all elements of list t
 * @h: name
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
