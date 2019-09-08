#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: the text string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written, cl;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)     /* if file does not exist */
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);    /* file created, no text to add */
	}
/* count text_content length */
	for (len = 0; text_content[len]; len++)
		;

	written = write(fd, text_content, len);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
