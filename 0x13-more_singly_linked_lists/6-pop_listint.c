#include "lists.h"
/**
 * pop_listint - It deletes the head node of a listint_t linked list.
 * @head: pointer to Pointer to the head node.
 *
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
