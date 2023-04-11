#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 * @argc: argument count
 * @argv: pointer of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void) argv;

		printf("%d\n", argc - 1);
	return (0);
}
