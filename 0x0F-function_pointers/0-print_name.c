#include "function_pointers.h"

/**
 * print_name - prints @name using function @f
 * @name: name to be printed
 * @f: function that will print @name
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!*f)
		return;
	f(name);
}
