#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip
 * to get from one number to another
 * @n: the number to be changed
 * @m: the new number formed after the flip
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int val, county = 0;
	unsigned int currentNo;
	unsigned long int exclve = n ^ m;

	for (val = 63; val >= 0; val--)
	{
		currentNo = exclve >> val;
		if (currentNo & 1)
			county++;
	}
	return (county);
}
