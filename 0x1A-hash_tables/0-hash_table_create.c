#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t = NULL;
	unsigned long int i;

	/*allocate memory to the new table*/
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL)
		return (NULL);
	/*memory to the array*/
	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
