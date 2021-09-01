#include "main.h"
#include <stdio.h>
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
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
	}
	}
	else
	{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n == 98)
			break;
		printf(", ");
	}
	}
	printf("\n");
}
