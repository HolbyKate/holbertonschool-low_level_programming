#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @n: integer value to be added to the new node
 * @head: pointer to pointer
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}
	new_node->n = n;
	if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	if (*head == new_node)
	{
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
