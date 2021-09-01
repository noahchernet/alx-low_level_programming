#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number whose last digit is to be printed
 *
 * Return: the last digit of @num
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(48 + last_digit);
	return (last_digit);
}
