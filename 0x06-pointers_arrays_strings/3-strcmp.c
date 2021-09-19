#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be compared against @s2
 * @s2: the second string used to compare with @s1
 *
 * Return: the sum of the difference of each characters of @s1 and @s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
	{
		i++;
	}

	if (s1[i] != 0 && s2[i] != 0)
		return (s1[i] - s2[i]);

	return (0);
}
