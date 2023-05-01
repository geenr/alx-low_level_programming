#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node in Linked List at a certain index
 * @head: pointer to the first element in List
 * @index: index of node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *currentnode = NULL;
	unsigned int K = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (K < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		K++;
	}


	currentnode = temp->next;
	temp->next = currentnode->next;
	free(currentnode);

	return (1);
}
