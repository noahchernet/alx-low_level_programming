#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the nth table
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (((i * j) / 10) % 10 != 0)
			{
				_putchar(48 + ((i * j) / 10) % 10);
			}

			_putchar(48 + ((i * j) % 10));
			if (j == 9)
			{
				_putchar(10);
			}
			else if ((i * (j + 1)) > 9)
			{
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
		}
	}
}
