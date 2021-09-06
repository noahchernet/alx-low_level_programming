#include "main.h"

/**
 * rev_string - prints a string
 * @s: the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int n = 0; /* The size of the string */
	int i = 0;
	char *r;
	r = s;
	/* Calculate the size of the string */
	while (s[n] != 0)
	{
		n++;
	}

	while (n  >= 0)
	{
		s[n] = r[i];
		i++;
		n--;
	}
}
