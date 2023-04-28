#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* _strlen - finds the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
unsigned int _strlen(char *str)
{
	unsigned int b;

	for
		(b = 0;
		 str[b];
		 b++);
	return (b);
}


/**
* add_node_end - adds a new node to the end of linked list
* @head: double pointer to a linked list_t list
* @str: string to add to the new node
*
* Return: pointer to the new node address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = _strlen(newnode->str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
