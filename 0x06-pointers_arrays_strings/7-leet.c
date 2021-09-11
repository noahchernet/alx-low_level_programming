#include "main.h"

/**
  * leet - Encodes a string to 1337
  * @s: string to be encoded to 1337
  *
  * Return: @s, a 1337 string
  */

char *leet(char *s)
{
	int i, j;
	char letters[] = {'A', '4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (s[i] == letters[j] || s[i] == letters[j] + 32)
			{
				s[i] = letters[j + 1];
			}
		}
	}

	return (s);
}
