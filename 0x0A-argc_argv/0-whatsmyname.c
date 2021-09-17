#include "main.h"
#include <stdio.h>

/**
  * printname - prints the string passed to it
  * @str: the string to be printed
  *
  * Return: void
  */
void printname(char *str)
{
	printf("%s\n", str);
}

/**
  * main - prints the name passed to it on runtime
  * @argv: array of passed arguments
  * @argc: number of passed arguments
  *
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	printname(argv[argc * 0]);
	return (0);
}
