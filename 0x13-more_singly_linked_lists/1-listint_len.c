#include "lists.h"
/**
 * listint_len - It returns the number of the element in an linked listint_t list
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the lists.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
