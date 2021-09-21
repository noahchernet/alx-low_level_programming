#include "main.h"

/**
 * create_array - creates  an array of chars, and initializes
 *				  it with a specific char.
 * @size: the size of the char array
 * @c: the character to be populated in the array
 *
 * Return: char* array filled with @c
 *		   NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
		return (0);

	str = (char *) malloc(size);
	size--;

	while (size != 0)
	{
		str[size] = c;
		size--;
	}

	return (str);
}
