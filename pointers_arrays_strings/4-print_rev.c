#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string reverse
 * @s : la phrase
 * Return : always (0)
 */

void print_rev(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	if (i >= 0; i--);
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
