#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string reverse
 * @s : la phrase
 * Return : void
 */

void rev_string(char *s)
{
	int i = 0, a = 0, b;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		b = s[i];
		s[i--] = s[a];
		s[a++] = b;

	}

}
