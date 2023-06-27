#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints every other character starting with the first character
 * @str: type of character
 * Return: Always 0.
 */
void puts_half(char *str)

{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (i / 2 == 0)
                        putchar(str[i]);
        }
        {       putchar('\n');
        }
}
