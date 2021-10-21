#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: file to be created
 * @text_content: the content that'll be appended to the file
 *
 * Return:  1 if successful
 *			-1 if file doesn't exist, @filename is NULL or you don't have the
 *			required permissions to write to the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, char_count = 1;
	char *buffer_in_file = "*", *previous_buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (-1);

	do {
		previous_buffer = buffer_in_file;
		buffer_in_file = malloc(sizeof(char) * char_count);
		read(fd, buffer_in_file, char_count);
		char_count += (int) strlen(buffer_in_file);
	} while (*previous_buffer != *buffer_in_file && *buffer_in_file != 0);
	close(fd);
	free(buffer_in_file);

	fd = open(filename, O_RDWR);

	if (char_count - 2)
	{
		buffer_in_file = malloc(sizeof(char) * char_count);
		read(fd, buffer_in_file, char_count - 1);
		write(fd, text_content, strlen(text_content));
		close(fd);
		free(buffer_in_file);
		return (1);
	}

	else
		write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
