#include "lists.h"

/**
 * free_listint_safe - free a Linked List
 * @h: pointer to the first node in Linked List
 *
 * Return: number of elements in freed List
 */
size_t free_listint_safe(listint_t **h)
{
	size_t Len = 0;
	int different;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		different = *h - (*h)->next;
		if (different > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			Len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			Len++;
			break;
		}
	}

	*h = NULL;

	return (Len);
}
