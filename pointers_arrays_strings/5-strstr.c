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
	int a = 0;
	int b = 0;

	while (haystack[a])

	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return (NULL);
}

