#include "lists.h"

/**
 * reverse_listint - reverses a Linked List
 * @head: pointer to the first node in List
 *
 * Return: pointer to the first node in new List
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *nextnode = NULL;

	while (*head)
	{
		nextnode = (*head)->nextnode;
		(*head)->nextnode = previous;
		previous = *head;
		*head = nextnode;
	}

	*head = previous;

	return (*head);
}
