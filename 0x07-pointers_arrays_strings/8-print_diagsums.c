#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two
  * diagonals of a square matrix of integers.
  * @a: the matrix
  * @size: the order of the matrix
  *
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, j;
	int right_diagonal = 0;
	int left_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		/* printf("Adding %d\n", *(*(&a + i) + i));*/
		right_diagonal += *(*(&a + i) + i);
	}

	j = size - 1;

	for (i = 0; i < size; i++)
	{
		/*printf("Adding %d\n", *(*(&a + i) + i));*/
		left_diagonal += *(*(&a + i) + j);
		j--;
	}

	printf("%d, %d\n", right_diagonal, left_diagonal);

}
