#include "main.h"
/**
 * create_file - function to create a file
 * @filename: The name of the file
 * @text_content: The content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = write(fd, text_content, len);
		if (bytes == -1 || (size_t) bytes != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

