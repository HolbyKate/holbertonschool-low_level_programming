#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to string
 *
 * Return: 0 if fail
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp == NULL)
		count++;
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d], %s", temp->len, temp->str);
		}
		count++;
		temp = temp->next;
	}
	return (count);
}
