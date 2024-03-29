#include "lists.h"

/**
 * free_dlistint - function that frees a 
 * dlistint_t
 *
 * @head: pointer to a head of a list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
