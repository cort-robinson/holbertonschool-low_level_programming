#include "holberton.h"

/**
 * create_file - Creates a file.
 * @filename: Name of file to create.
 * @text_content: NULL terminated string to write to file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, txt_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	txt_len = strlen(text_content);

	wr = write(fd, text_content, txt_len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
