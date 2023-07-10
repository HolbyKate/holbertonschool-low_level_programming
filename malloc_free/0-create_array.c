#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,with a specific char
 * @size: size for the memories
 * @c: characters
 *
 * Return: pointer to the array or size, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = NULL;

	s = malloc(size * sizeof(char));
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





