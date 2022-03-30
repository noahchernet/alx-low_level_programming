#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for in @array
 *
 * Return: The first index where value is located, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{

	int i, lo, hi, mid;

	for (i = 0; array && i < (int) size ; i++)
	{
		hi = power(2, i);
		lo = i == 0 ? 0 : power(2, i - 1);
		if (hi >= (int) size)
		{
			hi = (int) size - 1;
			printf("Value found between indexes [%d] and [%d]\n", lo, hi);
			break;
		} else if (value >= array[i] && value <= array[hi])
		{
			printf("Value found between indexes [%d] and [%d]\n", lo, hi);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", hi, array[hi]);
	}

	for (mid = (lo + hi) / 2; hi - lo > -1; mid = (lo + hi) / 2)
	{
		print_array(array, lo, hi);
		if (array[mid] == value)
		{
			if (hi - lo == 1)
				print_array(array, lo, hi);
			return (mid);
		}

		if (value < array[mid])
			hi = mid - 1;
		else if (value > array[mid])
			lo = mid + 1;
		else
			lo = mid;
	}

	return (-1);
}

/**
 * print_array - prints the values of an array starting from lower bound upto
 * upper bound
 * @array: array of ints to be displayed
 * @lower_bound: the first element's index to be printed
 * @upper_bound: the last element's index to be printed
 */
void print_array(int *array, int lower_bound, int upper_bound)
{
	int i;

	printf("Searching in array: ");
	for (i = lower_bound; i <= upper_bound; i++)
	{
		printf("%i", array[i]);

		if (i != upper_bound)
			printf(", ");
	}
	printf("\n");
}

/**
 * power - calculates the power of base to exponent
 * @base: number to be exponentiated
 * @exponent: the power
 *
 * Return: base ^ exponent
 */
int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result = result * base;
		exponent--;
	}

	return (result);
}
