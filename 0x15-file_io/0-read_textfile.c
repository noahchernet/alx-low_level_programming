#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the text file
 * @letters: how many chars from the text file will be printed
 *
 * Return: actual numbers of letters it could read and print
 *		   0 if filename is NULL or write fails or does not write
 *		   the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	char *buffer;
	ssize_t bytes_printed;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY, letters);

	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	read(fd, buffer, letters);
	close(fd);

	bytes_printed = write(STDOUT_FILENO, buffer, strlen(buffer));
	free(buffer);

	return (bytes_printed);
}
