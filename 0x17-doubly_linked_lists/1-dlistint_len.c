#include "lists.h"

/**
 * dlistint_len - function that returns number
 * of elements in a linked dlistint_t list
 *
 * @h: head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int el_numb = 0;

	if (h == NULL)
		return (el_numb);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		el_numb++;
		h = h->next;
	}
	return (el_numb);
}
