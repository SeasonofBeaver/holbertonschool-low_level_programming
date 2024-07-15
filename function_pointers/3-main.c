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
	
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (num2 == 0))
	{
		printf("Error");
		exit(100);
	}

	outcome = get_op_func(argv[2])(num1, num2);
	printf("%d\n", outcome);
	return (0);
}
