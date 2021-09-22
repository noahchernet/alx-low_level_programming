#include "main.h"

/**
 * argstostr - concatenates strings passed as arguments and adds newline
 * between each string
 * @ac: number of strings passed
 * @av: array of strings passed
 * Return: NULL ac is 0 or av is NULL
 *		   concatenation of all string if function performs correctly
 *		   NULL if malloc fails to allocate memory
 */
char *argstostr(int ac, char **av)
	{
	char *concatenated_str;
	int total_chars = 0, i, j, n;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			total_chars++;
		}
		/* For the newline character at the end of each string */
		total_chars++;
	}

	concatenated_str = (char *) malloc(total_chars + 1);

	if (!concatenated_str)
	{
		free(concatenated_str);
		return (NULL);
	}

	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			concatenated_str[n] = av[i][j];
			n++;
		}

		concatenated_str[n] = '\n';
		n++;
	}

	return (concatenated_str);
	}
