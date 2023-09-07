#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that add new element to the table
 * @ht: the hash table you want to add to
 * @key: the key element and cannot be empty string
 * @value: value associated with the key
 *
 * Return: 1 if success and 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy;
	unsigned long int i, index;
	hash_node_t *new_node;

	/*check if ht key and value is NULL and also if key is empty*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy);
		return (0);
	}

	new_node->key = strdup(key);/*duplicate key*/
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
