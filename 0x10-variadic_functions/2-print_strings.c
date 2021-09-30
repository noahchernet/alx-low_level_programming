#include "variadic_functions.h"

/**
 * print_strings - prints all strings passed in as arguments. If one of the
 * strings is NULL, (nil) is printed instead of it
 * @separator: the string printed between each passed string
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *current_str;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; (unsigned int) i < n; i++)
	{
		current_str = va_arg(ap, char *);

		if (current_str == NULL)
			printf("(nil)");

		else
			printf("%s", current_str);

		if ((unsigned int) i + 1 == n)
			break;

		printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
