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
	long int fib0, fib1, fibNow;

	fib0 = 0;
	fib1 = 1;
	for (i = 1 ; i <= 50 ; i++)
	{
		fibNow = fib0 + fib1;
		printf("%li, ", fibNow);
		fib0 = fib1;
		fib1 = fibNow;
	}
	putchar('\n');
	return (0);
}
