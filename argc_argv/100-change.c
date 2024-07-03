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

int main(int argc, char *argv[])
{
	int i, cents;

	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents > 25)
				cents -= 25;
			else if (cents > 10)
				cents -= 10;
			else if (cents > 5)
				cents -= 5;
			else if (cents > 2)
				cents -= 2;
			else
				cents -= 1;
			i++;
		}
		printf("%d\n", i);
	}
	return (0);
}
