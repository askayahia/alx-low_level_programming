#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t
 * @head: head of list to free
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
