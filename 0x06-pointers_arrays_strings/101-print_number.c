#include "main.h"
#include <stdio.h>

/**
  * print_number - prints the passed intiger using _putchar
  * @n: number to be printed
  *
  * Return: Always void
  */

void print_number(int n)
{
	int i = 1;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar(45);
	}

	while (n / i != 0)
		i *= 10;
	i /= 10;
/*	printf("i is %d\n", i);*/

	while (i != 0)
	{
		_putchar(((n / i) % 10) + 48);
		i /= 10;

	}
}
