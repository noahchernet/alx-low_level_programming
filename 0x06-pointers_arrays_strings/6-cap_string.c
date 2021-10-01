#include "main.h"

/**
  * cap_string - Capitalizes every letter coming after a space, tabulation,
  * new line, ,, ;, ., !, ?, ", (, ), {, and } in @s
  * @s: the string to be capitalized
  *
  * Return: @s, the string, capitalized
  */

char *cap_string(char *s)
{
	/*
	 * @c: the characters that make the next letter eligible to be capitalized
	 */
	char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')',
		  '{', '}'};
	int len = 0;
	int i;
	int k;

	while (s[len] != '\0')
	{
		len++;
	}

	if (s[0] >= 97 && s[0] <= 122)
		s[0] =  (char) (s[0] - 32);

	for (i = 0; i < len; i++)
	{
		for (k = 0; k < 13; k++)
		{
			if (s[i] == c[k] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] =  (char) (s[i + 1] - 32);
			}
		}
	}

	return (s);
}
