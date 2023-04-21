#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
	int i1, i2, result;
	int (*oprt)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	i1 = atoi(argv[1]);
	i2 = atoi(argv[3]);

	oprt = get_op_func(argv[2]);

	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = oprt(i1, i2);

	printf("%d\n", result);
	return (0);
}
