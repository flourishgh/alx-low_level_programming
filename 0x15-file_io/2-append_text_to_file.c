#include "main.h"
/**
 * append_text_to_file - add content to file
 * @filename: The file path
 * @text_content: The content to write
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = write(fd, text_content, len);
		if (bytes == -1 ||  bytes != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

