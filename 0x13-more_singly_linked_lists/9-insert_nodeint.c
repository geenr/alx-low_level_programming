#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node in a Linked List,
 * at a given position
 * @head: pointer to the first node in List
 * @idx: index where new node is added
 * @n: data to insert in new node
 *
 * Return: pointer to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int K;
	listint_t *newnodes;
	listint_t *temp = *head;

	newnodes = malloc(sizeof(listint_t));
	if (!newnodes || !head)
		return (NULL);

	newnodes->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		newnodes->next = *head;
		*head = newnodes;
		return (newnodes);
	}

	for (K = 0; temp && K < idx; K++)
	{
		if (K == idx - 1)
		{
			newnodes->next = temp->next;
			temp->next = newnodes;
			return (newnodes);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
