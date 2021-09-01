#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: the number whose last digit is to be printed
 *
 * Return: the last digit of @num
 */

int print_last_digit(int num)
{
	_putchar(48 + (num % 10));
	return (num % 10);
}
