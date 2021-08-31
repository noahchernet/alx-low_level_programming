#include "_putchar.c"

/**
 * main - Prints Holberton using _putchar()
 *
 * Return: 0
 */
int main(void)
{
	int chars[] = {72, 111, 108, 98, 101, 114, 116,
	111, 110};
	int i = 0;
	for (; i < 9; i++)
	{
		_putchar(chars[i]);
	}
	_putchar(10);
	return (0);
}
