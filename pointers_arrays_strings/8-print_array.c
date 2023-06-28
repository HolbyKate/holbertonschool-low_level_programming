#include "main.h"
#include <stdio.h>
/**
 * print_array - prints every other character starting with the first character
 * @a: type of character
 * @n: number
 * Return: void
 */
void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
