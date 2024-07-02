#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * @argc: number of arguments in argv
 *
 * @argv: array of arguments
 *
 * Return: 0 ends the program
 */

int main(int argc, char **argv)
{
	int sum;

	(void) argc;
	if ((isdigit(atoi(argv[1]))) && (isdigit(atoi(argv[2]))))
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
