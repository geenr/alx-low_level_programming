#include "main.h"

/**
 * get_endianness - Checks if Machine is Little or Big Endian
 * Return: 0 for Big, 1 for Little
 */
int get_endianness(void)
{
	unsigned int myvalue = 1;
	char *cMachine = (char *) &myvalue;

	return (*cMachine);
}
