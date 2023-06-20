#include <stdio.h>
/*
 * main - prints all single digit base 10 starting 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dg;

	for (dg = 0; dg < 10; dg++)
		printf('%d', dg);
	printf('\n');

	return (0);
}
