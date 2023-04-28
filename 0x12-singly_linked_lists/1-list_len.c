#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of element in a linked list t
 * @h: name
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
