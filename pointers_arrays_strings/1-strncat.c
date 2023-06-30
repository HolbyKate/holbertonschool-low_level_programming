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
	int i= 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	
	dest[i + n + 1] = '\0';

	return (dest);
}
