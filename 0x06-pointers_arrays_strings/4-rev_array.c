#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: the array to be reversed
 * @n: the number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b[1000000];
	int i;


	for (i = 0; i < *(&b + 1) - b; i++)
	{
		b[i] = 0;
	}


	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	/*	printf("a[%d] = %d, b[%d] = %d\n", i, a[i], (n - i), b[n - i]);*/
	}

	for (i = 0; i < n; i++)
	{
/*		printf("a[%d] = %d, b[%d] = %d\n", i, a[i], (n - i), b[n - i]);*/
		a[i] = b[n - 1 - i];
/*		printf("After update: a[%d] = %d, b[%d] = %d\n\n",
		i, a[i], (n - i), b[n - i]); */

	}

	printf("\n");
}
