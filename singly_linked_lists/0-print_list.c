#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to string
 *
 * Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	for (count = 0; temp; count++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d], %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
