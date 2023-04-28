#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */

int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - function add a new node at beginning of a list_t list.
 * @head: head of a list_t
 * @str: value to insert element
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);

	n->len = _strlen(str);
	n->next = *head;
	*head = n;

	return (n);
}
