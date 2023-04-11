#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument num
 * Return: 0 (success), 1 for two arg not given
 */

int main(int argc, char *argv[])
{
	int w, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	w = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", w * y);

	return (0);
}
