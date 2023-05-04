#include "main.h"

/**
 * flip_bits - Counts Number of Bits to change
 * to get from one Number to another
 * @n: First Number
 * @m: Second Number
 *
 * Return: Number of Bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int myvalue, count = 0;
	unsigned long int currentNo;
	unsigned long int exclusive = n ^ m;

	for (myvalue = 63; myvalue >= 0; myvalue--)
	{
		currentNo = exclusive >> myvalue;
		if (currentNo & 1)
			count++;
	}

	return (count);
}
