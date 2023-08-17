#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new
 * node at the beginning of a dlistint_t list
 *
 * @head: head of list
 * @n: value of element
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newer_nod = malloc(sizeof(dlistint_t));
	if (newer_nod == NULL)
		return NULL;
	
	newer_nod->n = n;
	newer_nod->prev = NULL;
	newer_nod->next = *head;
	
	if (*head != NULL)
		(*head)->prev = newer_nod;
	
	*head = newer_nod;
	return newer_nod;
}
