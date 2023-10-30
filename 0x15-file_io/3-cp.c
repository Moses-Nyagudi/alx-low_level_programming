#include "main.h"


/**
 * print_error - Print an error message to stderr.
 * @code: The error code.
 * @file: The file name associated with the error.
 */

void print_error(int code, const char *file)
{
	dprintf(2, "Error: ");
	if (code == 98)
		dprintf(2, "Can't read from file %s\n", file);
	else if (code == 99)
		dprintf(2, "Can't write to file %s\n", file);
	else if (code == 100)
		dprintf(2, "Can't close fd %s\n", file);
}


/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, error codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;

	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, argv[1]);
		return (98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error(99, argv[2]);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(99, argv[2]);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, argv[1]);
		return (98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error(100, "Unknown");
		return (100);
	}
	return (0);
}
