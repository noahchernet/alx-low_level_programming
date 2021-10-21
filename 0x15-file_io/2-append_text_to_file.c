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
	char *aft_wr; /* Chars in @filename after writing in file */

	fd = open(filename, O_RDONLY);
	if (!filename || fd == -1)
		return (-1);
	if (!text_content)
		return (1); /* If @text_content is empty, do nothing */
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
		fd = open(filename, O_RDONLY);
		aft_wr = malloc(sizeof(char) * char_count + strlen(text_content));
		read(fd, aft_wr, char_count + strlen(text_content));
		close(fd);
		/* If @text_content is not written to file, return -1 */
		if (*str_concat(buffer_in_file, text_content) != *aft_wr)
		{
			free(buffer_in_file);
			return (-1);
		}
		return (1);
	}
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}

/**
 * str_concat - concatenates @s1 and @s2 and stores the new string in a new
 *				location in the memory
 * @s1: string where @s2 will be concatenated to
 * @s2: string to be concatenated on @s1
 *
 * Return: @s1 + @s2
 *		   NULL if function fails
 */
char *str_concat(const char *s1, const char *s2)
{
	int len_s1 = 0, len_s2 = 0, n;
	char *concatenated_str;

	if (s1 == 0)
		s1 = "";


	if (s2 == 0)
		s2 = "";

	while (s1[len_s1] != 0)
		len_s1++;

	while (s2[len_s2] != 0)
		len_s2++;

	n = len_s1 + len_s2;
	concatenated_str = malloc(n + 1);

	if (concatenated_str == 0)
		return (0);

	n = len_s1;
	while (n >= 0)
	{
		concatenated_str[n] = s1[n];
		n--;
	}

	n = len_s2;
	while (n >= 0)
	{
		concatenated_str[len_s1 + n] = s2[n];
		n--;
	}

	return (concatenated_str);

}
