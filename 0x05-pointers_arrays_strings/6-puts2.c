#include "main.h"

/**
 * puts2 - prints every other characher of a string starting
 *		with the first character followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int n = 0;

	while (str[n] != 0)
	{
		n++;
	}

	for (i = 0; i <= n; i += 2)
	{
		if (str[i] != 0)
		_putchar(str[i]);
	}
	_putchar(10);
}
