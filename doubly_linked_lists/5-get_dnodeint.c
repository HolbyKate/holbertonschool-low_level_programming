#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the list
 *
 * Return : the nth node of a dlistint
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;
	while (head != NULL)
	{
		head = head->next;
		i++;
	}

	return (head);
}
