#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints every other character starting with the first character
 * @str: type of character
 * Return: Always 0.
 */
void puts_half(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	for (i /= 2; str[i] != '0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
