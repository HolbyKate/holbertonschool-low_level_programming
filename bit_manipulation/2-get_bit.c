#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - unction that returns the value of a bit at a given index.
 * @n: number
 * @index: index of the bit we want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
	i
int get_bit(unsigned long int n, unsigned int index)

{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

