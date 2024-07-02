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
	int sum = 0, i, j;
	char *argument;

	argument = &argv;
	if (argc > 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			argument = argv[i];
			for (j = 0 ; argument[j] != '\0' ; j++)
				if ((argument[j] < '0' ) || (argument[j] > 9))
				{
					printf("Error\n");
					return (1);
				}
			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
