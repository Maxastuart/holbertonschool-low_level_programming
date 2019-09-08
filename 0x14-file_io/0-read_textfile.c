#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to STD_OUT
 * @filename: the name of the filename to read and print
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters printed, or 0 if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readn, written, fd, cl;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	readn = read(fd, buffer, letters);
	if (readn == -1)
		return (0);

	written = write(STDOUT_FILENO, buffer, readn);
	if (written == -1)
		return (0);

	if (readn != written)
		return (0);

	cl = close(fd);
	if (cl == -1)
		return (0);
	free(buffer);

	return (readn);
}
