#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string of which half of will be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != 0)
	{
		len++;
	}

	if (len % 2 == 0)
		n = len / 2;
	else
		n = 1 + (len - 1) / 2;

	for (; n <= len; n++)
	{
		if (str[n] == len && str[n] == ' ')
			break;
		if (str[n] != 0)
		_putchar(str[n]);
	}
	_putchar(10);
}
