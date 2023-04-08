#include "main.h"
/**
 * print_error_and_exit - Print Error and Exit
 * @code: error code
 * @message: error message
 * Return: void
 */
void print_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		snprintf(em, sizeof(em), "Error: Can't read from file %s", file_from);
		print_error_and_exit(98, em);
	}
	fd_to = open(file_to, fflag, fperm);
	if (fd_to == -1)
	{
		snprintf(em, sizeof(em), "Error: Can't write to %s", file_to);
		print_error_and_exit(99, em);
	}
	while ((bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wbytes = write(fd_to, buffer, bytes);
		if (wbytes == -1)
		{
			snprintf(em, sizeof(em), "Error: Can't write to %s", file_to);
			print_error_and_exit(99, em);
		}
	}
	if (bytes == -1)
	{
		snprintf(em, sizeof(em), "Error: Can't read from file %s", file_from);
		print_error_and_exit(98, em);
	}
	if (close(fd_from) == -1)
	{
		snprintf(em, sizeof(em), "Error: Can't close fd %d", fd_from);
		print_error_and_exit(100, em);
	}
	if (close(fd_to) == -1)
	{
		snprintf(em, sizeof(em), "Error: Can't close fd %d", fd_to);
		print_error_and_exit(100, em);
	}
	return (0);
}
