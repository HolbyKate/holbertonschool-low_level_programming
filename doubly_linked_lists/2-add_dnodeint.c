#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - function that adds a new node at the start of a dlistint_t list
 * @n: node
 * @head: pointer
 *
 * Return: he address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	node = malloc(sizeof(dlistint_t));
	
	if (node == NULL)
	{
		free(node);
		node = NULL;
		return (NULL);
	}
		node->n = n;
		node->prev = NULL;
		node->next = NULL;
		*head = node;
		return (node);
}
