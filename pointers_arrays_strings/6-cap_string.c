#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: changer string
 *
 * Return: void
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			((i == 0) ||
			 (s[i-1] == " ") ||
			 (s[i-1] == '\t') ||
			 (s[i-1] == '\n') ||
			 (s[i-1] == ",") ||
			 (s[i-1] == ";") ||
			 (s[i-1] == ".") ||
			 (s[i-1] == "!") ||
			 (s[i-1] == "?") ||
			 (s[i-1] == """) ||
			 (s[i-1] == "(") ||
			 (s[i-1] == ")") ||
			 (s[i-1] == "{") ||
			 (s[i-1] == "}")
			 (s == 0));

				s[i] = s[i] - 32;
		}

		i++;
	}
	return (s);
}
