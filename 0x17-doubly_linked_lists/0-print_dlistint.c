#include "lists.h"

/**
 * print_dlistint - function that prints
 * all the elements of a dlistint_t list
 *
 * @h: head of the list nodes
 * Return: the  number of  nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int el_numb = 0;
	if (h == NULL)
		return (el_numb);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		el_numb++;
		h = h->next;
	}
}
