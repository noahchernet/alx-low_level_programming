#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies the integers passed in runtime
  * @argc: number of arguments passed
  * @argv: arrary of arguments passed
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n",  atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
