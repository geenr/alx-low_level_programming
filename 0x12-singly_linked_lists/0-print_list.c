#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @header: header of linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *header)
{
	size_t z = 0;

	while (header != NULL)
	{
		if (header->str != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", header->len, header->str);
		}
		z++;
		header = header->next;
	}
	return (z);
}
