#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: copies
 * Return: void
 */

char *_strcpy(char *dest, char *src)

{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest('\0');
}
