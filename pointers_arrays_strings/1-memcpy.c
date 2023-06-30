#include "main.h"
#include <stdio.h>

/**
 * _memcpy : function that copies memory area
 * @dest: type char pointer
 * @src: type char memory area
 * @n: bytes
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
