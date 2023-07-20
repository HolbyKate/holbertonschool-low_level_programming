#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code
 * @argc: the number of argument
 * @argv: the array
 *
 * Return: name file
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op
	
	if (argc !=4)
	{
		printf("Error \n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((argv(2, '/') || argv(2, '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	result = (get_op_func(op))(num1, num2);
	printf("%d\n", result);

	return (0);
}


