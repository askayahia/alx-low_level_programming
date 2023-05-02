#include "lists.h"
/**
 * sum_listint - It returns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: Sum of all data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
