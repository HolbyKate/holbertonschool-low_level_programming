#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory
 * @s: memory area
 * @b: constant byte
 * @n: unsigned bytes
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
