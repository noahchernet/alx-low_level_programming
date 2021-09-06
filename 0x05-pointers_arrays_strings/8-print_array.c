#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the first n elements of array ay
 * @a: the array whose elements are going to be printed
 * @n: the number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}
	printf("\n");
}
