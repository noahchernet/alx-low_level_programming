#include "main.h"
/**
  * print_number - prints the passed integer using _putchar
  * @n: number to be printed
  *
  * Return: Always void
  */

void print_number(int n)
{
	int i = 1; /* Holds how many digits n has */

	/**
	 * if n is zero, just print zero
	 */
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	/**
	 * If n is negative, put the '-' sign and replace n by its
	 * absolute value
	 */
	if (n < 0)
	{
		n /= -1;
		_putchar(45);
		if (n == -2147483648)
		{
			n = 147483648;
			_putchar(50);
		}
	}


	while (n / i >= 10)
	{
		i *= 10;
	}

	while (i != 0)
	{
		_putchar(((n / i) % 10) + 48);
		i /= 10;

	}

}
