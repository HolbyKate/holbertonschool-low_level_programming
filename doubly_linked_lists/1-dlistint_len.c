#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - function returns number of elements in a link dlistint_t list
 * @h: pointer to a doble linked list -t
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);

	while (temp->prev)
		temp = temp->prev;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
