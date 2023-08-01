#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that free a list_t list
 * @head: the new_node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next_node = head->next;

	while (head != NULL)
	{
		free(head->str);
		free(head);

		head = next_node;
	}
}
