#include "lists.h"

/**
 * find_listint_loop - find the loop in Linked List
 * @head: Linked List to search for
 *
 * Return: address of node where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Slower = head;
	listint_t *Faster = head;

	if (!head)
		return (NULL);

	while (Slower && Faster && Faster->next)
	{
		Faster = Faster->next->next;
		Slower = Slower->next;
		if (Faster == Slower)
		{
			Slower = head;
			while (Slower != Faster)
			{
				Slower = Slower->next;
				Faster = Faster->next;
			}
			return (Faster);
		}
	}

	return (NULL);
}
