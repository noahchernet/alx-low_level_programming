#include <stdio.h>

/**
 * main - prints the largest prime factor of number 612852475143
 *
 * Return: Always 0
*/

int main(void)
{
	int i;
	double num = 612852475143.0;

	for (i = 2; i < num / 2; i++)
	{
		/* printf("Now, i is %d and num / i is: %f\n", i, (num / i)); */
		if (num / i == (int) (num / i))
		{
			printf("%d\n", (int) (num / i));
			break;
		}
	}

	return (0);
}
