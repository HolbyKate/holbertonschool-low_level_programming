#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint
 * @h: pointer to string
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (-1);

	while (temp->prev)
		temp = temp->prev;

	if (temp != NULL)
	{
		printf("%d\n", h->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
