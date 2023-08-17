#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new
 * node at the end of a dlistint_t list.
 *
 * @head: head of list
 * @n: value of element
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new_nodes == NULL)
		return (NULL);
	new_nodes->n = n;
	new_nodes->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_nodes;
	}
	else
	{
		*head = new_nodes;
	}

	new_nodes->prev = h;
	return (new_nodes);
}
