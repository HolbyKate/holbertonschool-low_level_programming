#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @*str :
 */

void _puts(char *str)

{
	int i;
	for (i = 0; str[i] ; i++)
	{
		_putchar(str[i]);

	}

	_putchar('\n');
}
