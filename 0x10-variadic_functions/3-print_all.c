#include "variadic_functions.h"

/**
 * print_all - prints all arguments regardless of their data type
 * @format: list of all types passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s;

	va_start(ap, format);
	while (format != NULL && format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] == 0)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
