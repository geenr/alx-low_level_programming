#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		z++
			h = h->next;
	}
	return (z);
}
