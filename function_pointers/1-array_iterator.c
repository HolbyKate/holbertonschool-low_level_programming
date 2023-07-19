#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: the array
 * @size: the size
 * @action: the function to execute
 *
 * Return : void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

	/* quand la donée est null ou 0, return rien*/
{
	if (array == NULL)
		return;
	if (size == 0)
		return;
	if (action == NULL)
		return;

	/* size is the size of the array et action pointer to the function*/

	while (size--)
		(action(*array++));
}
