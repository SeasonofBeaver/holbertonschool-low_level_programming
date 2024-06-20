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
	long int fib0, fib1, fibNow, fibSum;

	fib0 = 0;
	fib1 = 1;
	fibNow = 1;
	fibSum = 0;
	while (fibNow >= 4000000)
	{
		fibNow = fib0 + fib1;
		fib0 = fib1;
		fib1 = fibNow;
		if ((fibNow % 2) == 0)
			fibSum += fibNow;
	}
	printf("%li\n", fibSum);
	return (0);
}
