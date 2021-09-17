#include "main.h"
#include <stdio.h>

/**
  * main - prints the number of argumetnts passed
  * @argc: number of arguments passed
  * @argv: array of arguments passed
  *
  * Return: Alwaus 0
  */

int main(int argc, char *argv[])
{
	int size = 0;

	while (argv[size] != 0)
		size++;

	printf("%d\n", (argc + size) / 2 - 1);

	return (0);
}
