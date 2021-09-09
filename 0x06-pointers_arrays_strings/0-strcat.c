#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: the first string
 * @dest: the string wich @src will be concatenated to
 * 
 * Return: char pointer of the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int src_len = 0;
	int dest_len = 0;
	int i;
	
	printf("Calc len of src\n");
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	
	printf("Calc len of dest\n");
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	dest_len++;
	
	printf("Starting concatenation\n");
	for (i = 0; i <= src_len; i++)
	{
	/*	printf("%c going to be added\n", src[i]); */
		dest[dest_len] = src[i];
	/*	printf("dest: %s", dest);*/
		dest_len++;
	}
	return (dest);

}
