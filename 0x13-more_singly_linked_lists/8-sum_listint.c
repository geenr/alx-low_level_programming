#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a Listint_t List
 * @head: first node in Linked List
 *
 * Return: resulting total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}
