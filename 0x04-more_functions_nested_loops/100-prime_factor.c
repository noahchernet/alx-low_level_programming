#include <stdio.h>

/**
 * seive_of_atkin - lists all the prime numbers up to limit 612852475143
 *
 * Return: array of primes
 */

void seive_of_atkin()
{
	long limit = 612852475143;
	static int seive[50847534];
	long i, n, x, y, r;

	for (i = 0; i < limit; i++)
	{
		seive[i] = 0;
	}
	for (x = 1; x * x < limit; x++)
	{
		for (y = 1; y * y < limit; y++)
		{
			n = (4 * x * x) + (y * y);
			if (n <= limit && (n % 12 == 1 || n % 12 == 5))
				seive[n] ^= 1;

			n = (3 * x * x) + (y * y);
			if (n <= limit && n % 12 == 7)
				seive[n] ^= 1;

			n = (3 * x * x) - (y * y);
			if (x > y && n <= limit && n % 12 == 11)
				seive[n] ^= 1;
		}

/*		 Mark all multiples of squares as non-prime*/
		for (r = 5; r * r < limit; r++)
			if (seive[r])
			{
				for (i = r * r; i < limit; i += r * r)
					seive[i] = 0;
			}

	}

	/* Print primes using seive[]*/
	for (i = 5; i < limit; i++)
	{
		if (seive[i])
			printf("%ld", i);
	}

/*	return (seive);*/
}

/**
 * main - prints the largest prime factor of number 612852475143
 *
 * Return: Always 0
*/

int main(void)
{
	printf("Starting...\n");
	seive_of_atkin();
	printf("Finished\n");
	return (0);
}
