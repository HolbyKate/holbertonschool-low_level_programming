#include "main.h"
#include <stdio.h>

/**
 * _strcmp - copy a string
 * @s1: strig 1 to compare
 * @s2: string 2 to compare
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
		return (s1[i] - s2[i]);

	}
