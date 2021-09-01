#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

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
