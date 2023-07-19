#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or size <= 0, else int_index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
/* if no elements matches and size negative o 0 */

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
}
