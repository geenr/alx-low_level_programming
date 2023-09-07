#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key that you are looking for
 *
 * Return: value associated with element
 * or NULL if element is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *key_node;
	unsigned long int index_key;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);
	index_key = key_index((const unsigned char *)key, ht->size);
	if (index_key >= ht->size)
		return (NULL);
	key_node = ht->array[index_key];
	while (key_node && strcmp(key_node->key, key) != 0)
		key_node = key_node->next;

	return ((key_node == NULL) ? NULL : key_node->value);
}
