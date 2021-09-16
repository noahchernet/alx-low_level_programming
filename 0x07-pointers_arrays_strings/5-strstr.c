#include "main.h"
#include <stdio.h>

/**
  * _strstr -  finds the first occurrence of the substring needle in the
  * string haystack. The terminating null bytes (\0) are not compared finds
  * the first occurrence of the substring needle in the string haystack.
  * The terminating null bytes (\0) are not compared
  * @haystack: the string where the existence of @needle is checked
  * @needle: the substring which is looked for in @haystack
  *
  * Return: a pointer to the beginning of the located substring, or NULL if
  * the substring is not found.a pointer to the beginning of the located
  * substring, or NULL if the substring is not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int needle_in_haystack = 0;

	for (i = 0; haystack[i] != 0; i++)
	{
		/* printf("Checking from %c onwards\n", haystack[i]); */
		for (j = 0; needle[j] != 0; j++)
		{

			/* printf("Checking if %c == %c\n", haystack[i], needle[j]); */
			if (haystack[i + j] == needle[j] &&
					haystack[i + j] != 0 && needle[j] != 0)
			{
				needle_in_haystack = 1;
				continue;
			}

			needle_in_haystack = 0;
		}

		if (needle_in_haystack)
			return (&haystack[i]);
	}

	return (0);
}
