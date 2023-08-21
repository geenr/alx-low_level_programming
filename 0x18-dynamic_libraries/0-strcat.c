#include "main.h"
/**
 * _strcat - function thatconcatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a, j;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		j++;
	}

	dest[a] = '\0';
	return (dest);
}
