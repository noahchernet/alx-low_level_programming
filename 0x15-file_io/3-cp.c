#include "main.h"

/**
 * main - copies contents of one file to another
 * @argc: number of arguments passed to function
 * @argv: the program itself, the file to copy from and the file to copy to
 * Return: 0 if successful, the respective exit statuses if it fails
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 1, -1);
	fd_to = open_file(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0, 0664);

	copy_contents(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * copy_contents - copies the contents of the file @fd_from to file @fd_to
 * @fd_from: file descriptor of the file whose contents will be copied
 * @fd_to: file descriptor of the file which @fd_from's content will be
 * copied to
 * @filename_fd_from: the filename of @fd_from, to reopen it in the middle of
 * @filename_fd_to: the filename of @fd_to, to print it if there's an error
 * the function
 * Return: void
 */

void copy_contents(int fd_from, int fd_to, char *filename_fd_from,
				   char *filename_fd_to)
{
	int char_count = 1, i = 1024;
	char *buffer_in_file_from, *buffer_in_file_to, *buffer_to_copy;

	buffer_in_file_from = malloc(sizeof(char) * 1);
	buffer_in_file_from = "*";
	/* Count the number of character to copy from fd_from */
	do {
		buffer_in_file_from = malloc(sizeof(char) * char_count);
		read(fd_from, buffer_in_file_from, char_count);
		char_count += (int) strlen(buffer_in_file_from);
	} while (*buffer_in_file_from != 0);
	free(buffer_in_file_from);
	char_count--;

	close_file(fd_from);
	fd_from = open_file(filename_fd_from, O_RDONLY, 1, -1);
	buffer_in_file_from = malloc(sizeof(char) * char_count);
	read(fd_from, buffer_in_file_from, char_count);

	do {
		if (strlen(buffer_in_file_from) < 1024)
		{
			write(fd_to, buffer_in_file_from, strlen(buffer_in_file_from));
			break;
		}
		buffer_to_copy = *(&buffer_in_file_from + i);
		write(fd_to, buffer_to_copy, 1024);
		i += 1024;
	} while (i < char_count + 1024);
	close_file(fd_to);
	fd_to = open_file(filename_fd_to, O_RDONLY, 0, -1);

	buffer_in_file_to = malloc(sizeof(char) * char_count);
	read(fd_to, buffer_in_file_to, char_count);
	/* Check if file copy is successfull */
	if (*buffer_in_file_from != *buffer_in_file_to)
	{
		free(buffer_in_file_from);
		free(buffer_in_file_to);
		close_file(fd_from);
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", filename_fd_to);
		exit(99);
	}
	free(buffer_in_file_from);
	free(buffer_in_file_to);
}

/**
 * close_file - closes the file passed to it
 * @fd: the file descriptor of the file to be closed
 *
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
		exit(100);
	}
}

/**
 * open_file - opens the file and assigns it
 * to the file descriptor passed to it
 * @filename: name of the file to open
 * @flag: how the file will be opened (for reading, writing, etc)
 * @file_to_copy_from: if 1, it's the file to copy from, if 0 it the file to
 * copy to
 * @fp: the files permissions
 *
 * Return: the file descriptor of the opened file
 */

int open_file(char *filename, int flag, int file_to_copy_from, int fp)
{
	int fd;

	if (fp != -1)
		fd = open(filename, flag, fp);
	else
		fd = open(filename, flag);

	if (fd == -1)
	{
		if (file_to_copy_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					filename);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s", filename);
		exit(99);
	}

	return (fd);
}
