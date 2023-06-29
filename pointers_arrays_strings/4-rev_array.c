#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that prints a string
 * @a: string to be reversed
 * @n: number of care  of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, r, j;

	i = 0;
	r = n - 1;

	while (i <= r)
	{
		j = a[i];
		a[i] = a[r];
		a[r] = j;
		i++;
		r--;
	}
}
