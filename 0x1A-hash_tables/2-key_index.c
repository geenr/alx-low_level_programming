#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * key_index - function that gives the index of a key
 * @key: is the key being allocated the index
 * @size: size of the array
 *
 * Return: index at which the key is stored in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_f;

	hash_f = hash_djb2(key);
	return (hash_f % size);
}
