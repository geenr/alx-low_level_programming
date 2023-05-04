#include "main.h"

/**
 * get_bit - Returns the Value of a Bit at an Index in a Decimal Number
 * @n: Number to search
 * @index: Index of the Bit
 *
 * Return: Value of Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
