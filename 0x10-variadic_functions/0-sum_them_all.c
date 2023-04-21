#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all parameters
 * @n: number of parameters
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
