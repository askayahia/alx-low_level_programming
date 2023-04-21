#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main- Entry point
 * @argc: the number of parameters.
 * @argv: the parameeters in the case the number ob bytes
 * Description: this program prints opcodes in hexa
 * Return: 0 in succes
 */

int main(int argc, char *argv[])
{
	int x, y;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	y = atoi(argv[1]);
	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < y - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
