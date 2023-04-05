#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: integr to swap
 * @b: integr to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
