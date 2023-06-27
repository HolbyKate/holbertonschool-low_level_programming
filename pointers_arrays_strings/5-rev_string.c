#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string reverse
 * @s : la phrase
 * Return : void
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)

	{
		putchar(s[i]);
	}
	putchar('\n');

	for (i -= 1; i >= 0; i--)

		putchar('\n');
}

