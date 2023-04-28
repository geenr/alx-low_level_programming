#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that returns the length of string
 * @q : q is a character
 *
 * Return: value is b
 */
int _strlen(const char *q)
{
	int b = 0;

	while (q[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of a list_t list
 * @str: new string to add in the node
 *
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *newnode;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
