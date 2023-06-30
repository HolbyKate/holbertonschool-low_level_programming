#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: changer string
 *
 * Return: void
 */

char *cap_string(char *)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			((i == 0) ||
			 (str[i - 1] == 32) ||
			 (str[i - 1] == '\t') ||
			 (str[i - 1] == '\n') ||
			 (str[i - 1] == 44) ||
			 (str[i - 1] == 59) ||
			 (str[i - 1] == 46) ||
			 (str[i - 1] == 33) ||
			 (str[i - 1] == 63) ||
			 (str[i - 1] == 34) ||
			 (str[i - 1] == 40) ||
			 (str[i - 1] == 41) ||
			 (str[i - 1] == 123) ||
			 (str[i - 1] == 125) ||
			 (str == 0))

				s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}
