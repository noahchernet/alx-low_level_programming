#include "main.h"

/**
 * main - Prints Holberton using _putchar()
 *
 * Return: 0
 */
int main(void)
{
	/*
	 * int Holberton[] = {72, 111, 108, 98, 101, 114, 116,
			111, 110};
	*/
	char Holberton[] = "_putchar\n";
	int ij;

	for (ij = 0; ij < 9; ij++)
	{
		_putchar(Holberton[ij]);
	}
	/*
	 * _putchar(10);
	 */
	return (0);
}
