#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at beginning of list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: address of new element, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	if
		(*head == NULL);
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}


