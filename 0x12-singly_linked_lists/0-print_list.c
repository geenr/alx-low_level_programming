#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @K: header of linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *K)
{
	size_t z = 0;

	while (K != NULL)
	{
		if (K->str != NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", K->len, K->str);
		}
		z++;
		K = K->next;
	}
	return (z);
}
