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
	int num1, num2;
	int (*fptr)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	fptr = get_op_func(argv[2]);
	
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", fptr(num1, num2));
	return (0);
}
