#include "main.h"
#include <stdio.h>

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


	s = malloc((sizeof(char) * i) + 1);
	if (s == 0)
		return (NULL);
	s[a] = str[a];
	a++;

	return (s);
}
