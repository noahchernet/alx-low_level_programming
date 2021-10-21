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
	int fd, char_count = 1;
	char *buffer_in_file = "*", *previous_buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	do
	{
		previous_buffer = buffer_in_file;
		buffer_in_file = malloc(sizeof(char) * char_count);
		read(fd, buffer_in_file, char_count);
		printf("Buffer in file is: %s\n", buffer_in_file);
		printf("Previous buffer is: %s\n", previous_buffer);
		char_count++;
	} while (*previous_buffer != *buffer_in_file && *buffer_in_file != 0);
	char_count -= 2; /* Don't count the '\0' at the end of the file */
	printf("\n");

	if (char_count)
	{
		printf("Prev file has text\n");
		write(fd, str_concat(buffer_in_file, text_content),
		strlen(buffer_in_file) + strlen(filename));
		close(fd);
		return (1);
	}

	if (!text_content)
		write(fd, "", 0);
	else
	{
		write(fd, "", 0);
		write(fd, text_content, strlen(text_content));
	}

	close(fd);
	return (1);
}

/**
 * str_concat - concatenates @s1 and @s2 and stores the new string in a new
 *				location in the memory
 * @s1: string where @s2 will be concatenated to
 * @s2: string to be concatenated on @s1
 * Return: @s1 + @s2
 *		   NULL if function fails
 */
char *str_concat(char *s1, char *s2)
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
