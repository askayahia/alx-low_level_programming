#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function finds the length of a string
 * @str: string to find the length
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - function adds a new node to the end of list t
 * @head: head
 * @str: string to add to the new node
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;

	if (str == NULL)
		return (NULL);
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = _strlen(n->str);
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	t = *head;
	while (t->next)
		t = t->next;
	t->next = n;
	return (n);
}
