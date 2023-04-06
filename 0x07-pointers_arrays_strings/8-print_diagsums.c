#include "main.h"

/**
 * print_diagsums - function print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int diagonal_sum1 = 0;
	int diagonal_sum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_sum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_sum2 += a[i];
	}

	printf("%d, %d\n", diagonal_sum1, diagonal_sum2);

}
