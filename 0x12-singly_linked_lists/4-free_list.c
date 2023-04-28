#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a linked list
 * @hed: list_t list be free
 */
void free_list(list_t *hed)
{
	list_t *temp;

	while (hed)
	{
		temp = hed->next;
		free(hed->str);
		free(hed);
		hed = temp;
	}
}
