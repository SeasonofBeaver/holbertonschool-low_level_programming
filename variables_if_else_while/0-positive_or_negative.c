#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%lu is positive", n);
	else if (n < 0)
		printf("%lu is negative", n);
	else
		printf("%lu is zero", n);
	return (0);
}
