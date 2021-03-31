#include "holberton.h"
/**
 * main - function to cp file_from into file_to
 * @argc: int of command line args
 * @argv: strings assigned to args
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int fd_source, fd_dest, writecheck, readcheck = 1, closecheck;
	char *buf[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fd_dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_dest == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((readcheck = read(fd_source, buf, 1024)) > 0)
	{
		writecheck = write(fd_dest, buf, readcheck);
		if (writecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_source), close(fd_dest), exit(99);
		}
	}
	if (readcheck == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	closecheck = close(fd_source);
	if (closecheck == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source);
		exit(100); }
	closecheck = close(fd_dest);
	if (closecheck == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100); }
	return (0);
}
