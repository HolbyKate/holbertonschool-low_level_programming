#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that free a list_t list
 * @head: the node to be free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t * tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
