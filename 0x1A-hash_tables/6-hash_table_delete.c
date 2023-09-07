#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table being deleted
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempo, *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				tempo = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tempo;
			}
		}
	}
	free(ht->array);
	free(ht);
}
