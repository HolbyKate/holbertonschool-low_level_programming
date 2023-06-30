#include "main.h"
#include <stdio.h>

/**
 * _strncat - print a string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: always success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != ’\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
