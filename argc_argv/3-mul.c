#include "main.h"
#include <stdio.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: number of argument
 * @argv: prints argument
 *
 * Return: void
 */

int main (int argc, char *argv[])
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
