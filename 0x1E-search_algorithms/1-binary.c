#include "search_algos.h"
/**
 * binary_search - using binary search algorithm, searches through an int
 * array for a value
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for in @array
 *
 * Return: The first index where value is located, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{

	int lo = 0, hi = (int) size - 1, mid;

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

