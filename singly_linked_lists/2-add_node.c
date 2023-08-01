#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - function that return the number of a list_t list
 * @h: pointer to a linked list -t
 *
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free (new_node);
		new_node == NULL;
		return (NULL);
	}
	new_node => str = strdup (str);
	new_node => len = str (str);
	new_node => *head;
	*head = new_node;
	return (*head);
}
