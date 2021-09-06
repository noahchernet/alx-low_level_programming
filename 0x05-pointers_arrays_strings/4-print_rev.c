#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be reversed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n = 0; /* The size of the string */

	/* Calculate the size of the string */
	while (s[n] != 0)
	{
		n++;
	}

	while (n  >= 0)
	{
		if (s[n] != 0)
		_putchar(s[n]);
		n--;
	}
	_putchar(10);
}
