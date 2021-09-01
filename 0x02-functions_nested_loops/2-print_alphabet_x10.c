#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times follwed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(lowerCase[i]);
		}
	_putchar(10);
	}
}
