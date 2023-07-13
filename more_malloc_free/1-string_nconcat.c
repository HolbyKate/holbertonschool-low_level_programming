#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat two string 
 * @s1: string one
 * @s2: string two
 * @n: number
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *a;
    unsigned int i, j, str1, str2;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (j = 0; s2[j] != '\0' && j < n; j++)
        ;
    str1 = i;
    str2 = j;
    a = malloc(sizeof(char) * (str1 + str2 + 1));
    if (a == NULL)
        return (NULL);
    for (i = 0; i < str1; i++)
    {
        a[i] = s1[i];
    }
}
