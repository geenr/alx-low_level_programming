#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * nth node of dlistint_t linked lis
 *
 * @head: head of a list
 * @index: index of node
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	p = head;
	while (p)
	{
		if (index == x)
			return (p);
		x++;
		p = p->next;
	}
	return (NULL);
}
