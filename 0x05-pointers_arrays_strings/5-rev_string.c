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
	int i;
	char *r;
	int k;

	r = s;

	/* Calculate the size of the string */
	while (s[n] != 0)
	{
		n++;
	}

	k = n;

	for (i = 0; i <= k; i++)
	{
		s[i] = r[n];
		n--;
	}
}
