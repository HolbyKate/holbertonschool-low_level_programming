#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu bytes\n", sizeof(intType));
printf("Size of a long int: %lu bytes\n", sizeof(longintType));
printf("Size of a long long int: %lu bytes\n", sizeof(longlongintType));
printf("Size of a float: %lu bytes\n", sizeof(floatType));
return (0);
}
