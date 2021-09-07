#include "main.h"

/**
 * swap - swaps two values in an int array
 * @list: the array whose values are to be swapped
 * @a: first value to be swapped to the second value
 * @b: second value to be swapped to the first value
 *
 * Return: void
 */
void swap(char *list, int a, int b)
{
	char temp = list[a];

	list[a] = list[b];
	list[b] = temp;
}

/**
 * rev_string - prints a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int n = 0; /* Holds the size of s */
	int i;
	int k;

	/* Calculate the size of n */
	while (s[n] != '\0')
	{
		n++;
	}

	n--;
	k = n;

	for (i = 0; i <= (n / 2); i++)
	{
		/*
		 * printf("Swapping \'%c\' with \'%c\'\n", s[i], s[k]);
		 * printf("s is now: %s\n", s);
		 */
		swap(s, i, k);
		k--;
	}

}
