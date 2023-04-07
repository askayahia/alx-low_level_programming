#include "main.h"

/**
 * check_root - function return for the square root
 * @a:int
 * @root:test root
 * Return: square root
 */
int check_root(int a, int root)
{
	if (root * root > a)
		return (-1);

	if (root * root == a)
		return (root);

	return (check_root(a, root + 1));
}

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_root(n, 0));
}
