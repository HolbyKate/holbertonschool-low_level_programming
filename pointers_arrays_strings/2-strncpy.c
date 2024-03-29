#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number
 * Return: always success
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
