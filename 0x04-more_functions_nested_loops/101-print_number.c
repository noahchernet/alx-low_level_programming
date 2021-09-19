#include "main.h"
#include "stdio.h"

/*
 * print_number - prints integer passed to it using _putchar
 * @n: number to be printed
 *
 * Return: void
 */

int power(int x, int power)
{
	int result = 1;
/*	printf("%d raised to %d is ", x, power);*/


	while (power != 0) {
		result *= x;
		--power;
	}

/*	printf("%d\n", result);*/
	return (result);
}

void print_number(int n)
{
	int digits = 0, i;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	while (n / power(10, digits) > 0)
	{
/*		x = power(10, digits);
		printf("%d / %d is %d\n\n", n, x, n / x);
		printf("digits = %d, digits - 1 = %d\n", digits, digits - 1);*/
		digits++;
	}

	digits--;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

/*
	printf("From printf: %d is %c", n, );
*/
	for (i = 0; i <= digits; i++)
	{
		_putchar((char) (48 + (n / power(10, i))));
	}

/*	printf("---\n%d has %d digits.\n---\n", n, digits);*/


}
