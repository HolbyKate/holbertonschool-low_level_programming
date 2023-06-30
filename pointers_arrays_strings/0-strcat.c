#include "main.h"
#include <stdio.h>

/**
 * _strcat - print a string
 * @dest: destination string
 * @src: source string
 *
 * Return: always success
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
