#include "variadic_functions.h"

/**
 * print_numbers - prints all the ints passed in as arguments
 * @separator: the string printed between each passed number
 * @n: number of arguments passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; (unsigned int) i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if ((unsigned int) i + 1 == n)
			break;

		printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
