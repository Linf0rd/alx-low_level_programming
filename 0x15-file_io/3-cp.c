#include "main.h"

#define BUFFER_SIZE 1024

/**
 * open_file - Opens a file with specified flags and mode.
 * @file_n: Name of the file to open.
 * @flags: Flags for opening the file.
 * @mode: Mode of the file.
 *
 * Return: File descriptor of the opened file.
 */

int open_file(const char *file_n, int flags, int mode)
{
	int fd = open(file_n, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_n);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Closes a file.
 * @fd: File descriptor of the file to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: File to copy from.
 * @file_to: File to copy to.
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from = open_file(file_from, O_RDONLY, 0);
	int fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, otherwise error code.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
