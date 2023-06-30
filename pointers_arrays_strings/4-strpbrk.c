#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 * @s: string where is the first occurrence
 * @accept: string of result
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	while (s[i] != '\0')
	{
		j= 0;

		while (accept [j]!= '\0')
		{
			return(0);

			j++;
		}
	}
	return(NULL);
}
