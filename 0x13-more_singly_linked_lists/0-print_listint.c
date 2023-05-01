#include "lists.h"

/**
 * print_listint - prints all the elements of linked lists
 * @h: linked list of type listint_t to be printed
 *
 * Return: number of nodes being printed
 */
size_t print_listint(const listint_t *h)
{
	size_t numbern = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbern++;
		h = h->next;
	}

	return (numbern);
}
