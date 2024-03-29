#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of argument
 * @argv: the array
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int result = 0;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}


