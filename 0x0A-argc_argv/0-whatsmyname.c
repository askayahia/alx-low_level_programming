#include <stdio.h>
#include "main.h"

/**
 * main - program that prints name followed by a new line
 * @argc: argument counter
 * @argv: pointer of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
