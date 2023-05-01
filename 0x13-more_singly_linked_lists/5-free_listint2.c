#include "lists.h"

/**
 * free_listint2 - frees a Linked List
 * @head: pointer to Listint_t List to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *Temp;

	if (head == NULL)
		return;

	while (*head)
	{
		Temp = (*head)->next;
		free(*head);
		*head = Temp;
	}

	*head = NULL;
}
