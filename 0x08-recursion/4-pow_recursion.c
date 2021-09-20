#include "main.h"

/**
 * _pow_recursion - raises a number to the specified exponent
 * @x: the number to be raised to the exponent @y
 * @y: the exponent
 *
 * Return: -1 if y < 0
 *			x ^ y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
