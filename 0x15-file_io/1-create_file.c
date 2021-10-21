#include "main.h"

/**
 * create_file -  creates a file and fills it with @text_content only
 * @filename: file to be created
 * @text_content: the content of the newly created file
 *
 * Return:  1 on success
 *			-1 on failure which could be file can not be created,
 *			file can not be written, write() fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, char_count = 1, i;
	char *buffer_in_file = "*", *previous_buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	/**
	 * Count the number of characters in the file, if it's not empty, char
	 * count will be different from 0, and vice versa
	 */
	do {
		previous_buffer = buffer_in_file;
		buffer_in_file = malloc(sizeof(char) * char_count);
		read(fd, buffer_in_file, char_count);
		char_count += (int) strlen(buffer_in_file);
	} while (*previous_buffer != *buffer_in_file && *buffer_in_file != 0);
	char_count--;
	close(fd);

	fd = open(filename, O_WRONLY);
	for (i = 0; i <= char_count; i++)
		write(fd, NULL, i);
	if (!text_content)
		write(fd, "", 0);
	else
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);
	return (1);
}
