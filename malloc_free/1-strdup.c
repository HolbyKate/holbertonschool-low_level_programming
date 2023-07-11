#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: sting to be duplicate
 *
 * Return : a pointer if success, NULL if not
 */

char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == 0)
		return (NULL);
	while (st[i]);
	{
		i++;
	}
	s = malloc(i + 1 * sizeof(char));

	if (s == 0)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	return (s);
}
