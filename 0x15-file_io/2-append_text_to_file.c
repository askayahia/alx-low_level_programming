#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - It appends text at the end of a file!
 * @filename: File name!!
 * @text_content: The NULL t
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = NULL;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fputs(text_content, file);
	}

	fclose(file);
	return (1);
}
