#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate memory
 * @b: place to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void i;

	i = malloc(b);
	if (i == NULL)
		exit ("b");
	return (i);
}

