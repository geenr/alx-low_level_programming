#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number being changed to binary
 * @index:  the index, starting from 0 of the bit you want to set
 *
 * Return: 1 for Success, -1 for Failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
