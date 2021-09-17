#include "main.h"
#include <stdio.h>

/**
  * main - prints all arguments passed in runtime
  * @argc: number of arguments passed
  * @argv: array of arguments passed
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
