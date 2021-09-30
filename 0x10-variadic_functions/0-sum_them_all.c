#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers passed in argument
 * @n: number of arguments passed
 *
 * Return: sum of all ints in argument
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; (unsigned int) i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
