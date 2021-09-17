#include "main.h"
#include <stdio.h>

/**
  * _strchr - Returns a pointer to the first occurrence of the character c in
  * the string s, or NULL if the character is not found
  * @s: the string to be parsed
  * @c: the character to be looked for
  *
  * Return: c if the character is in the string, NULL if otherwise
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
