#include "main.h"
#include <stdlib.h>

/**
 * str_concat - newly allocated space in memory with content of s1 et s2
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 *
 * Return: point to a newly allocated space , if fail NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *s;

	if (s1 != NULL)
		for (i = 0; s1[i]; i++)

			if (s1 == NULL)
				s1 = "";
	if (s2 != NULL)
		for (j = 0; s2[j]; j++)

			if (s2 == NULL)
				s2 = "";

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);

	while (k < (i + j))
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];
		k++;
	}
	s[k] = 0;
	return (s);
}

