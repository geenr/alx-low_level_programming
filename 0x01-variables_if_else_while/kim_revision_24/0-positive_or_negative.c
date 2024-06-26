#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point of the function
 * n - the variable assigned random numbers
 *
 * return - 0
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}
