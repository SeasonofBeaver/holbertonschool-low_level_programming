#include "3-calc.h"

/**
 * get_op_func - begining
 *
 * Description: print if negative or positive
 *
 * @s: first input
 *
 * Return: 0 ends the program
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
	int i;

	while (i < 6)
	{
		if (ops[i][0] == s)
			return (ops[i][1]);
		i++;
	}
	return (NULL);
}
