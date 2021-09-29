#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operation (+, -, *, / or %)
 *
 * Return: a corresponding function if s is an operator
 *		   NULL if s is not an operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
