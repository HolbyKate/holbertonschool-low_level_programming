#inckude "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * 
 */

void _puts(char *str)

{
	int i;
	for (i = 0; str[i] ; i++)
	{
		_putchar(str);

	}

	_putchar('\');
}
