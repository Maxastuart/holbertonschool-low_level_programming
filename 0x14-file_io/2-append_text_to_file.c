#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the text string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written, cl;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)     /* if file does not exist */
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);    /* file opened, no text to add */
	}

	for (len = 0; text_content[len]; len++) /* strlen(text_content) */
		;

	written = write(fd, text_content, len);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
