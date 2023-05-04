#include "main.h"

/**
 * binary_to_uint - Convert a Binary Number to unsigned int
 * @b: String containing Binary Number
 *
 * Return: The Converted Number
 */
unsigned int binary_to_uint(const char *b)
{
	int myvalue;
	unsigned int decimalVal = 0;

	if (!b)
		return (0);

	for (myvalue = 0; b[myvalue]; myvalue++)
	{
		if (b[myvalue] < '0' || b[myvalue] > '1')
			return (0);
		decimalVal = 2 * decimalVal + (b[myvalue] - '0');
	}

	return (decimalVal);
}
