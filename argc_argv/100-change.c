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
		printf("Errori\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0");
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents % 25 == 0)
				cents -= 25;
			else if (cents % 10 == 0)
				cents -= 10;
			else if (cents % 5 == 0)
				cents -= 5;
			else if (cents % 2 == 0)
				cents -= 2;
			else
				cents -= 1;
			i++;
		}
		printf("%d", i);
	}
	return (0);
}
