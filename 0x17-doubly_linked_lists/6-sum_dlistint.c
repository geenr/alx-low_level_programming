#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of data in list, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int addata = 0;
	dlistint_t *pointers = head;
	
	while (pointers != NULL)
	{
		addata += pointers->n;
		pointers = pointers->next;
	}
	
	return addata;
}
