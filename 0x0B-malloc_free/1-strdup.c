#include "main.h"

/**
 * _strdup - allocates  space in memory, which contains
 *			 a copy of the string given as a parameter.
 * @str: the string to be copied to the newly allocated space
 * Return: 0 or NULL if @str is 0 or malloc cannot allocate memory or if
 *		   malloc returns null
 *		   pointer to copy of str if it's successful
 */
char *_strdup(char *str)
{
	int len = 0;
	char *new_str;

	if (str == NULL)
		return (0);

	while (str[len] != 0)
		len++;

	new_str = malloc(len + 1);

	if (new_str == 0)
		return (0);

	while (len >= 0)
	{
		new_str[len] = str[len];
		len--;
	}

	return (new_str);

}
