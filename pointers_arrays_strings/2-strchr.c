#include "main.h"
#include <stdio.h>

/**
 * _strchr - loctae a character
 * @*s: string
 * @c: occurence of the character
 *
 * Return: void
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == : c)
			return (s);
		s++;
	}
	else
	{
		return (NULL);
	}

}
