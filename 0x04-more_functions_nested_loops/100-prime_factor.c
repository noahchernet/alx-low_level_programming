#include <stdio.h>

/**
 * print_largest_prime - prints the largest prime of @n
 * @n: the number whose largest prime is to be looked for
 *
 * Return: array of primes
 */

void print_largest_prime(long n)
{
	long maxFact, div = 2;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
}

/**
 * main - prints the largest prime factor of number 612852475143
 *
 * Return: Always 0
*/

int main(void)
{
	print_largest_prime(612852475143);
	return (0);
}
