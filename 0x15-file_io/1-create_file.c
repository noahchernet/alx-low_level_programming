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
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | (O_TRUNC | O_RDWR), 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		write(fd, "", 0);
	else
	{
		write(fd, text_content, strlen(text_content));
	}

	close(fd);
	return (1);
}
