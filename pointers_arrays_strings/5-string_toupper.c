#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters of a string
 * @s: changer string
 * Return: void
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}
