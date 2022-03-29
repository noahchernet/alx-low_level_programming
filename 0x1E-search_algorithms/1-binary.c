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
    int idx = -1;
    size_t i;

    printf("Searching in array: ");

    for (i = 0; i < size; i++)
    {
        printf("%i", array[i]);

        if (i != size - 1)
            printf(", ");
    }
    printf("\n");

    if (value == array[size / 2])
    {
        idx = size / 2;
    }
    else if (value < array[size / 2])
    {
        printf("Going  left: ");
        idx = binary_search(array, size / 2, value);
    }
    else if (value > array[size / 2])
    {
        printf("Going right: ");
        idx = size - size / 2 - 1 + binary_search(array + (int)size / 2, size - size / 2, value);
    }

    return idx;
}
