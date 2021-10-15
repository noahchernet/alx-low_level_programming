#include "main.h"
#include "stdio.h"

/**
 * _atoi - convers the first number found in the passed string to integer
 * @s: the string to be converted to integer
 *
 * Return: an integer from the string
 *	   0 if there is no number in the string
 */

int _atoi(char *s)
{
	int first_int, last_int, num = 0, num_exists = 0, digits = 1;
	int is_negative = 0, i;

	for (i = 0; s[i] != 0; i++)
	{
		printf("%c, ", s[i]);
		/* If s[i + 1] is a number and preceeded by a - sign, make the number negative */
		if (s[i] == 45 && s[i + 1] >= 48 && s[i + 1] <= 57 && s[i - 1] < 48 && s[i - 1] > 57)
		{
			printf("\nnum is negative, - before %c", s[i + 1]);
			is_negative = 1;
		}
		/* If s[i] is a number and precedded by a non-number character,
		 * mark it as the first digit*/
		if (i == 0 && s[i] >= 48 && s[i] <= 57)
		{
			printf("\n%c is first number\n", s[i]);
			num_exists = 1;
			first_int = i;
		}
		else if (s[i - 1] < 48 && s[i - 1] > 57 && s[i] >= 48 && s[i] <= 57) 
		{
			printf("\n%c is first number\n", s[i]);
			num_exists = 1;
			first_int = i;
		}
		if (num_exists && s[i - 1] < 48 && s[i - 1] > 57)
		{
			printf("\n%c is last number\n", s[i]);
			last_int = i;
			break;
		}
	}

	if (num_exists)
	{
		digits = power(10, last_int - first_int + 1);
		
		for (i = 0; i <= last_int - first_int; i++)
		{
			num += (s[first_int + i] - 48) * digits;
			digits /= 10;
		}
		if (is_negative)
			num *= -1;
	}
	printf("--> ");
	return (num);
}

/**
 * power - raise num by the exponent power
 * @num: number to be raised
 * @power: the exponent
 *
 * Return: the exponentiated number
 */
int power(int num, int power)
{
	int i;
	
	for (i = 0; i < power; i++)
		num *= num;
	return (num);
}
