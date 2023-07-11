#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to a new string which is a duplicate of string
 * @str: sting to be duplicate
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int a = 0;
	int i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);

}
