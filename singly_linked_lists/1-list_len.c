#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to a linked list -t
 *
 * Return: always 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL)
		return (count);

	while (h != NULL)
		count++;
	{
		h = h->next;
		return (count);
	}
}
