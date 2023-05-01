#include "lists.h"

/**
 * listint_len - returns the number of elements in linked lists
 * @h: linked list of type listint_t to be traversed
 *
 * Return: number of nodes being printed
 */
size_t listint_len(const listint_t *h)
{
	size_t numbern = 0;

	while (h)
	{
		numbern++;
		h = h->next;
	}

	return (numbern);
}
