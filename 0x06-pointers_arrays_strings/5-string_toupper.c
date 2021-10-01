#include "main.h"

/**
 * string_toupper - converts all lowercase characters to uppercase
 * @s: string to be converted to uppercase
 *
 * Return: @str, the string with words' first letters converted to uppercase
 */

char *string_toupper(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = (char) (s[i] - 32);
	}

	return (s);
}
