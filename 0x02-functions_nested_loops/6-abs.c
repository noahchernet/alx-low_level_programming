#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @num: integer whose absolute value is to be calculated
 *
 * Return: the absolute value of the number passed in
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-1 * num);
	}
	else
	{
		return (num);
	}
}
