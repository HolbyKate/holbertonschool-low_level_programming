#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min: minimum
 * @max: maximum
 *
 * Return:the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(*a));
	if (a == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
