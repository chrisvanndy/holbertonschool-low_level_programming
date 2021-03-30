#include "holberton.h"
/**
 * create_file - create file and truncate given string
 * @filename: argument given on commandline
 * @text_content: content to write to file
 * Return: int 1 upon success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	write(fd, text_content, _strlen(text_content));

	close(fd);

		return (1);
}
/**
 * _strlen - lenght of character string
 * @s: string passed through
 * Return: int (x);
 */
size_t _strlen(char *s)
{
	size_t x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}

	return (x);
}
