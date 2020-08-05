#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of file to append.
 * @text_content: Text to append to file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, text_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	text_len = strlen(text_content);

	wr = write(fd, text_content, text_len);
	if (wr == -1)
		return (-1);

	return (1);
}
