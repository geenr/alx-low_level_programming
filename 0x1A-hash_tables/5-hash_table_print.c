#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table being printed
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int comma = 0;
	unsigned long int a;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		hash_node_t *node = ht->array[a];

		while (node != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			comma = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
