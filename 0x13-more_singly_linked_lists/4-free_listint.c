#include "lists.h"

/**
 * free_listint - frees the linked List
 * @head: listint_t List to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *Temp;

	while (head)
	{
		Temp = head->next;
		free(head);
		head = Temp;
	}
}
