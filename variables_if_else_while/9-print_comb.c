#include <stdio.h>

/**
 * main - Prints all possible combinations og single digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}


	putchar (',');
	putchar (' ');

	return (0);
}
