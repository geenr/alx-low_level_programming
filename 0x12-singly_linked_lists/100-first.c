#include <stdio.h>

void Firstsentences(void)_attribute_((constructor));
/**
 * First - prints sentences before main
 * Function is executed
 */
void Firstsentences(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
