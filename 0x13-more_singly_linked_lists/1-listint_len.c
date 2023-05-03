#include "lists.h"
/**
 * listint_len - It returns the number of the element in an linked listint_t list
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the lists.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

