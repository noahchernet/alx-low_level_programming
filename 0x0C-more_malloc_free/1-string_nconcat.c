#include "main.h"

/**
 * string_nconcat - concatenates s1 to the first n bytes of s2
 *					if n is greater than the size of s2, all of s2 is
 *					concatenated to s1
 * @s1: the first string, @s2 will be concatenated to the end of this string
 * @s2: the first n bytes of this string will be concatenated to @s1
 * @n: number of bytes to be copied form @s2
 *
 * Return: concatenated string, @s1 and @s2 concatenated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size = 0, s2_size = 0, i;
	char *concatenated_string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_size] != 0)
		s1_size++;

	while (s2[s2_size] != 0)
		s2_size++;

	if (n >= s2_size)
		n = s2_size;

	concatenated_string = (char *) malloc(s1_size + n + 1);

	if (!concatenated_string)
		return (NULL);

	for (i = 0; i < s1_size + n; i++)
	{
		if (i >= s1_size)
		{
			concatenated_string[i] = s2[i - s1_size];
			continue;
		}

		concatenated_string[i] = s1[i];
	}

	concatenated_string[s1_size + n] = '\0';
	return (concatenated_string);
}
