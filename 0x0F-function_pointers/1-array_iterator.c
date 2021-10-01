#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: the function is executed on each element of this array
 * @size: size of the array
 * @action: the function that will be executed on each element of @array
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !*action)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
