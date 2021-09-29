#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first number
 * @b: second number
 *
 * Return: the subtraction of b from a
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b
 * @a: first number
 * @b: second number
 *
 * Return: the multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 *
 * Return: the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * op_mod - finds the remainder of a / b
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
