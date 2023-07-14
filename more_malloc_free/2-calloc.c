#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: element
 * @size: size bytes
 * Return: pointer to the allocated memory or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;
	unsigned int calloc = nmemb * size;

		if (nmemb == 0 || size == 0)
			return (NULL);

	pointer = malloc(calloc);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < (calloc); i++)
		pointer[i] = 0;
	return (pointer);
}
