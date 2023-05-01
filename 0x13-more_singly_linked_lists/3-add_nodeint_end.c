#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of linked list
 * @head: pointer to the first element in list
 * @n: data to insert in the new Element
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodes;
	listint_t *temp = *head;

	newnodes = malloc(sizeof(listint_t));
	if (!newnodes)
		return (NULL);

	newnodes->n = n;
	newnodes->next = NULL;

	if (*head == NULL)
	{
		*head = newnodes;
		return (newnodes);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnodes;

	return (newnodes);
}
