#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: Name of file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of letter able to read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);

	/* read */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);

	return (wr);
}
