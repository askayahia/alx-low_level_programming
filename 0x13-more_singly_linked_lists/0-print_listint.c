#include "lists.h"
/**
 * print_listint - Prints all elements of an listint_t list.
 * @h: pointer to the heead of the list.
 *
 * Return: The number of nodes returned.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

