#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list_t
 * @h: pointer to the linked list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t z_list = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	z_list++;
	}

	return (z_list);
}
