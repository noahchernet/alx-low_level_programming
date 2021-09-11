#include "main.h"
#include <stdio.h>

/**
  * rot13 - Encode a string using rot13
  * @s: string to be encoded
  *
  * Return: @s, a rot13 encoded string
  */

char *rot13(char *s)
{
	int i, j;
	char letter_normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letter__rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter_normal[j] != '\0'; j++)
		{
			if (s[i] == letter_normal[j])
			{
				s[i] = letter__rot13[j];
				break;
			}
		}
	}

	return (s);
}
