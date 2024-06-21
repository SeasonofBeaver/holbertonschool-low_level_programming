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
	unsigned long int fib0, fib1, fibNow;

	fib0 = 0;
	fib1 = 1;
	for (i = 1 ; i < 98 ; i++)
	{
		fibNow = fib0 + fib1;
		printf("%lu, ", fibNow);
		fib0 = fib1;
		fib1 = fibNow;
	}
	fibNow = ((fib0 / 11) + (fib1 / 11));
	printf("%lu", fibNow);
	fibNow = ((fib0 % 11) + (fib1 % 11));
	printf("%lu\n", fibNow;
	return (0);
}
