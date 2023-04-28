#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @hed: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **hed, const char *str)
{
	list_t *news;
	unsigned int len = 0;

	while (str[len])
	len++;

	news = malloc(sizeof(list_t));
	if (!news)
	return (NULL);

	news->str = strdup(str);
	news->len = len;
	news->next = (*hed);
	(*hed) = news;

	return (*hed);
}
