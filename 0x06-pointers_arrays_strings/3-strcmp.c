#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string to be compared against @s2
 * @s2: the sencond string used to compare with @s1
 *
 * Return: the sum of the difference of each characters of @s1 and @s2
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int comp = 0;
	int i;

	while ( s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	/* printf("s1_len: %d, s2_len: %d\n", s1_len, s2_len);*/

	for (i = 0; i < s2_len; i++)
	{
		if ((int) s2[i] > (int) s1[i])
			comp++;
		else if ((int) s2[i] == (int) (s1[i]))
			continue;
		else
			comp--;
	}

	return (comp);	
}
