#include <stdio.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

int main(void)
{
	int i;
	float fib0, fib1, fibNow;

	fib0 = 0;
	fib1 = 1;
	for (i = 1 ; i < 98 ; i++)
	{
		fibNow = fib0 + fib1;
		printf("%f, ", fibNow);
		fib0 = fib1;
		fib1 = fibNow;
	}
	fibNow = fib0 + fib1;
	printf("%f\n", fibNow);
	return (0);
}
