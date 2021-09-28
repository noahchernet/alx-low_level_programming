#ifndef ABS_H
#define ABS_H

/**
 * ABS - finds the absolute value of an integer
 * @X: the integer whose absolute value is to be found
 * Return: -1 * X if X < 0, X if X > 0
 */
int ABS(int X)
{
	return ((X) < (0) ? (-1 * (X)) : (X));
}

#endif /* ABS_H */
