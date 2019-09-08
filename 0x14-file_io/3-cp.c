#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: array of arguments as strings, 1 and 2 being input and output files
 *
 * Return: 0 on success, -1 on error.
 */
int main(int argc, char **argv)
{
	const char *file1 = argv[1], *file2 = argv[2];
	ssize_t readn, written, fd, fd2, cl;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (file1 == NULL)
		return (0);

	fd = open(file1, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	while ((readn = read(fd, buffer, 1024)))
	{
		if (readn == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			exit(98);
		}
		written = write(fd2, buffer, readn);
		if (written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (readn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd);
		exit(100);
	}
	cl = close(fd2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd2);
		exit(100);
	}

	return (0);
}
