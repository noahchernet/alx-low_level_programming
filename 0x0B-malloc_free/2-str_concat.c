#include "main.h"

/**
 * str_concat - concatenates @s1 and @s2 and stores the new string in a new
 *				location in the memory
 * @s1: string where @s2 will be concatenated to
 * @s2: string to be concatenated on @s1
 * Return: @s1 + @s2
 *		   NULL if function fails
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, n;
	char *concatenated_str;

	if (s1 == 0)
		s1 = "";


	if (s2 == 0)
		s2 = "";

	while (s1[len_s1] != 0)
		len_s1++;

	while (s2[len_s2] != 0)
		len_s2++;

	n = len_s1 + len_s2;
	concatenated_str = malloc(n + 1);

	if (concatenated_str == 0)
		return (0);

	n = len_s1;
	while (n >= 0)
	{
		concatenated_str[n] = s1[n];
		n--;
	}

	n = len_s2;
	while (n >= 0)
	{
		concatenated_str[len_s1 + n] = s2[n];
		n--;
	}

	return (concatenated_str);

}
