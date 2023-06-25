#include <stdio.h>

/**
 * main - Prints all possible combinations og single digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (n = 97; n <= 'f'; n++)
	{
		putchar(n);
	}


	putchar (44);
	putchar (32);

	return (0);
}
