#include "main.h"
/**
 * print_to_98 - prints natural numbers from n to 98, followed by a new line.
 * @n: the first number to be printed on screen
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
	for (; n >= 98; n--)
	{
		_putchar(48 + (n / 10) % 10);
		_putchar(48 + n % 10);

		if (n == 98)
			break;
		_putchar(44);
		_putchar(32);
	}
	else
	{
	for (; n <= 98; n++)
	{
		_putchar(48 + (n / 10) % 10);
		_putchar(48 + n % 10);

		if (n == 98)
			break;
		_putchar(44);
		_putchar(32);
	}
	}
	_putchar(10);
}
