#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_bufer(char *file);
void ferm_file(int fd);

/**
 * make_bufer - It allocates 1k24 bytes for buffer!
 * @file: file name that buffer is storing chars for!
 * Return: Pointer the recently allocated buffer!
 */
char *make_bufer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * ferm_file - The ferme file descriptor!
 * @fd: File descriptor to closed!!
 */
void ferm_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - To copy the content of a file to another file!!
 * @argc: Number of argument supplied to a program!
 * @argv: Array of pointers to arguments.
 * Return: 0 for  success!
 * Description: If the arguments count is not correct - exit code 97!
 *              If file_from doesn't exist ou can't be read - exit code 98!
 *              If file_to can't be created or written to - exit code 99!
 *              If file_to or file_froms can't be closed - exit code 100!
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = make_bufer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	ferm_file(from);
	ferm_file(to);

	return (0);
}
