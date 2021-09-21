#include "main.h"

/**
 * _strlen_rec - returns the length of string s by calculating it
 * recursively
 * @s: the string whose length is to be calculated
 *
 * Return: @n the length of the string
 */
int strlen_rec(char *s)
{
/*	printf("String is now: %s\n", s);*/
	if (s[0] != 0)
	{
		return (1 + strlen_rec(&s[1]));
	}
	return (0);

}

/**
 * _print_rev_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[])
	int n = strlen_rec(s) - 1;

	if (s[n] == 0)
	{
		_putchar(s[0]);
		return;
	}

	_putchar((char) (s[n]));
	_print_rev_recursion(&(s[n] - 1)- 1);

}
