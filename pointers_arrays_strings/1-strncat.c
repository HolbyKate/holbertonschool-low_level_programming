#include "main.h"
#include <stdio.h>

/**
 * _strcat - print a string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: always success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
