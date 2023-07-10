#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,with a specific char
 * @size: size for the memories
 * @c: characters
 *
 * Return: always 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	i = 0;
	char *s;

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}





