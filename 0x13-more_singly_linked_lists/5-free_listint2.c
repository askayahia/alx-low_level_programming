#include "lists.h"
/**
 * free_listint2 - To free a listint_t list n sets the head to NULL.
 * @head: Pointers to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
