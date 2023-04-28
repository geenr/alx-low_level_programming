#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list of list_t
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *newnode;
	unsigned int len = 0;
	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = new_node;
	return (*head);
}
