#include "main.h"
#include <stdio.h>

/**
 * swap_int - pointer
 * @a: updates the value
 * @b: swap value
 */

void swap_int(int *a, int b)
{

	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
