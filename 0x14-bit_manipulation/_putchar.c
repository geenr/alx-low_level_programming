#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the Character c to stdout
 * @c: The Character to print
 *
 * Return: On success 1.
 * On error, -1 is Returned, and errno is Set Appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
