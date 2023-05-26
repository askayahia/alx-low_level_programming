#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * create_file - To create a file with content!
 * @filename: file name to create!
 * @text_content: NULL t
 * Return: 1 on success or -1 on failure!
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
