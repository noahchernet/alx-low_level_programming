#include "variadic_functions.h"

/**
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; (unsigned int) i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if ((unsigned int) i + 1 == n)
			break;

		printf("%s", separator);
	}

	printf("\n");
}
