#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print - moves string one place to left and prints the string
 * @str: string to move
 * @l: size of string
 * Return: void
 */
void _print(char *str, int l)
{
	int x, y;

	x = y = 0;
	while (x < l)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == l - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies char with string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int y, q, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (y = num_index, q = dest_index; y >= 0; y--, q--)
	{
		mul = (n - '0') * (num[y] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[q] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[q] = add % 10 + '0';
	}
	for (addrem += mulrem; q >= 0 && addrem; q--)
	{
		add = (dest[q] - '0') + addrem;
		addrem = add / 10;
		dest[q] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 * Return: void
 */
void init(char *str, int l)
{
	int x;

	for (x = 0; x < l; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, x;
	char *b;
	char *v;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	b = malloc(ln * sizeof(char));
	if (b == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(b, ln - 1);
	for (ti = l2 - 1, x = 0; ti >= 0; ti--, x++)
	{
		v = mul(argv[2][ti], argv[1], l1 - 1, b, (ln - 2) - x);
		if (v == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(b);
			exit(98);
		}
	}
	_print(b, ln - 1);
	return (0);
}
