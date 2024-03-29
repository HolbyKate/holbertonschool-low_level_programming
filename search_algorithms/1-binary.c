#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int hight, middle, low, i;

	low = 0;
	hight = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (hight >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < hight; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		middle = (low + hight) / 2;
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			low = middle + 1;
		}
		else
		{
			hight = middle - 1;

		}
	}
	return (-1);
}
