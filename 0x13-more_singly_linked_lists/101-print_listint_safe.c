#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Count number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of Listint_t to check.
 *
 * Return: If List is not looped - 0.
 * Otherwise - the number of unique nodes in List.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *dumpling, *chips;
	size_t nodesn = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dumpling = head->next;
	chips = (head->next)->next;

	while (chips)
	{
		if (dumpling == chips)
		{
			dumpling = head;
			while (dumpling != chips)
			{
				nodesn++;
				dumpling = dumpling->next;
				chips = chips->next;
			}

			dumpling = dumpling->next;
			while (dumpling != chips)
			{
				nodesn++;
				dumpling = dumpling->next;
			}

			return (nodesn);
		}

		dumpling = dumpling->next;
		chips = (chips->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Print a Listint_t List safely.
 * @head: A pointer to the head of Listint_t List.
 *
 * Return: The number of nodes in List.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodesn, index = 0;

	nodesn = looped_listint_len(head);

	if (nodesn == 0)
	{
		for (; head != NULL; nodesn++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodesn; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodesn);
}
