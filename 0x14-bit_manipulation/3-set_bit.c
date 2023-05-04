#include "main.h"

/**
 * set_bit - Sets Bit at given Index to 1
 * @n: Pointer to Numbers to change
 * @index: Index of Bit to Set to 1
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
