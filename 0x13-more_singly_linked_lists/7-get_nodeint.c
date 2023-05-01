#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in Linked List
 * @head: first node in Linked List
 * @index: index of node to return
 *
 * Return: pointer to node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int K = 0;
	listint_t *temp = head;

	while (temp && K < index)
	{
		temp = temp->next;
		K++;
	}

	return (temp ? temp : NULL);
}
