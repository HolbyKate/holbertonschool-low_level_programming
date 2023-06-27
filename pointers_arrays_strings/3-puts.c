#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str : la phrase
 * Return : always (0)
 */

void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		putchar(str[i]);

	}

	putchar('\n');
}
