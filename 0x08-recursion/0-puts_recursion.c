#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] != 0)
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}

	if (s[0] == 0)
		_putchar(10);
}
