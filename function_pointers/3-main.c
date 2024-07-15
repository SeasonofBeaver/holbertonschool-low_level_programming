#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * @argc: first input
 *
 * @argv: second input
 *
 * Return: 0 ends the program
 */

int main(int argc, char *argv[])
{
	int num1, num2, outcome;
	char op;
	
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (((op == '/') || (op == '%')) && (num2 == 0))
	{
		printf("Error");
		exit(100);
	}

	outcome = get_op_func(op)(num1, num2);
	printf("%d\n", outcome);
	return (0);
}
