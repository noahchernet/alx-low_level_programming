#include "main.h"

/**
 * main - prints the alphabet in lower case
 *
 * Return: 0
 */
int main(void)
{
	char lowerCase[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for(i = 0; i < 26; i++)
	{
		_putchar(lowerCase[i]);
	}

	return (0);
}
