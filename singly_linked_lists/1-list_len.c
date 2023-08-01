#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a linked list -t
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	for (; h != NULL; count++)
	{	
		h = h->next;
	}	
	return (count);
}
