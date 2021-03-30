#include "holberton.h"
/**
 * read_textfile - reads a file and prints given chars / counts chars
 * @filename: inserts given filename to operate on
 * @letters: given number of letters to be printed
 *
 * Return: ssize_t (count) = letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, writecheck = 0, count = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters);
		if (buf == NULL)
		return (0);

	count = read(fd, buf, letters);

	writecheck = write(STDOUT_FILENO, buf, count);
		if (writecheck == -1)
		count = 0;

	free(buf);

	close(fd);

	return (count);
}
