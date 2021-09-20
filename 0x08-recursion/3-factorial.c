#include "main.h"

/**
* factorial - calculates the factorial of a given number
 * @n: the integer whose factorial is to be calculated
 *
 * Return: -1 if n < 0 to indicate an error
 *			1 if n = 0
 *			1 if n = 1
 *			n! if n >= 2
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
