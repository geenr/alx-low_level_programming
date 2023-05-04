#include "main.h"

/**
 * print_binary - Prints Binary Equivalent of a Decimal Number
 * @n: Number to print in Binary
 */
void print_binary(unsigned long int n)
{
	int myvalue, count = 0;
	unsigned long int currentNo;

	for (myvalue = 63; myvalue >= 0; myvalue--)
	{
		currentNo = n >> myvalue;

		if (currentNo & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
