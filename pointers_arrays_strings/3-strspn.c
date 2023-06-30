#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length
 *@s: first segment
 *@accept: second string to analyse
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (s[i] != '\0')

	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
