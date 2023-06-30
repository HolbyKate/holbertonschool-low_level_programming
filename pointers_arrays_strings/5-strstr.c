#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: string char
 * @needle: substring
 *
 * Return: void.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')

		char s = haystack;
		char f = needle;
		{
		while (f ==*haystack && f != '\0' && *haystack != '\0')
		{
			haystack++;
			f++;
		}
		if (f =='\0')
			return (s);
		haystack = s + 1;
	}
	return (NULL);
}

