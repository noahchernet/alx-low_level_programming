#include "main.h"

/**
 * _strlen_recursion - returns the length of string s
 * @s: the string whose length is to be calculated
 *
 * Return: @n the length of the string
 */
int _strlen_recursion(char *s)
{
/*	printf("String is now: %s\n", s);*/
	if (s[0] != 0)
	{
		return (1 + _strlen_recursion(&s[1]));
	}
	return (0);

}
