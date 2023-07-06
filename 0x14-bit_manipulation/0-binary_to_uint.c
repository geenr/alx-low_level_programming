#include "main.h"

/**
 * binary_to_uint - Convert a Binary Number to its unsigned int
 * @b: String containing Binary Number
 *
 * Return: The Converted Number
 */
unsigned int binary_to_uint(const char *b)
{
	int val;
	unsigned int deciVal = 0;

	if (!b)
		return (0);

	for (val = 0; b[val]; val++)
	{
		if (b[val] < '0' || b[val] > '1')
			return (0);
		deciVal = 2 * deciVal + (b[val] - '0');
	}

	return (deciVal);
}
