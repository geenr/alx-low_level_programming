#include "lists.h"

/**
 * pop_listint - deletes the head node of Linked List
 * @head: pointer to the first element in Linked List
 *
 * Return: the data inside elements that was deleted,
 * or 0 if the List is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *Temp;
	int numbern;

	if (!head || !*head)
		return (0);

	numbern = (*head)->n;
	Temp = (*head)->next;
	free(*head);
	*head = Temp;

	return (numbern);
}
