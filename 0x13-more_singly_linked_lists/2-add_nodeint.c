#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of linked list
 * @head: pointer to first node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to new node, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodes;

	newnodes = malloc(sizeof(listint_t));
	if (!newnodes)
		return (NULL);

	newnodes->n = n;
	newnodes->next = *head;
	*head = newnodes;

	return (newnodes);
}
