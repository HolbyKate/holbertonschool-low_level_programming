#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts 
 * a new node at a given position
 * @h: pointer to head
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;

	i = 0;

	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		i++;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next->prev = new_node;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
