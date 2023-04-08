#include "main.h"
/**
 * read_textfile - unction that reads a text file
 * @filename: The file path
 * @letters: The letters
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t bytes;
	ssize_t wbytes;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	bytes = read(file_desc, buffer, letters);
	if (bytes == -1)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buffer, bytes);
	if (wbytes == -1 || wbytes != bytes)
	{
		close(file_desc);
		free(buffer);
		return (0);
	}

	close(file_desc);
	free(buffer);
	return (bytes);
}
