#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,with a specific char
 * @size: size for the memories
 * @c: characters
 *
 * Return: size
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	i = 0;
	char *p;

	if (p == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}





