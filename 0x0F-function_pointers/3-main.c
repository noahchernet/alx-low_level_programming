#include "3-calc.h"
#include "string.h"

/**
 * main - program starts here
 * @argc: number of arguments passed
 * @argv: array containing the numbers and an operator
 * Return: an int formed by operating the passed numbers with the passed
 * operator
 *		   exit with status 98 if number of arguments is wrong
 *		   exit with status 99 if operator is invalid
 *		   exit with status 100 if trying to divide by zero (for both / and %)
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] !=
																  '/' && *argv[2] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);


}
