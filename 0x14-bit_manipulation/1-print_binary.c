#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print in Binary
 */
void print_binary(unsigned long int n)
{
	int val, county = 0;
	unsigned long int currentNo;

	for (val = 63; val >= 0; val--)
	{
		currentNo = n >> val;

		if (currentNo & 1)
		{
			_putchar('1');
			county++;
		}
		else if (county)
			_putchar('0');
	}
	if (!county)
		_putchar('0');
}
