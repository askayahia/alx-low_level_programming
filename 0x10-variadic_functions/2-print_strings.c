#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @n: num of parameter
 * @separator: string printed between the strings
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int x;
	va_list strings;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		str = va_arg(strings, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
