#include "holberton.h"
/**
 * append_text_to_file - appends text to existing file
 * @filename: given pathway to file
 * @text_content: given
 * Return: (1) on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1 || fd == EACCES)
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
