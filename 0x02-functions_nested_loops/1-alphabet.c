#include "main.h"

/**
 *  print_alphabet - prints the alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(lowerCase[i]);
	}
	_putchar(10);
}
