#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: header of linked list_t to print
 *
 * Return: the number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		z++;
	}
	return (z);
}
