#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the list
 *
 * Return: the nth node of a dlistint
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *h = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		if (i == index)
		{
			return (h);
		}
		h = h->next;
		i++;
	}
	return (h);
}
