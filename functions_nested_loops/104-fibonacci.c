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
	unsigned long int fib0, fib1, fibNow, fibFirstHalf, fibSecondHalf;
	unsigned long int fib0first, fib0second, fib1first, fib1second;

	fib0 = 0;
	fib1 = 1;
	for (i = 1 ; i < 99 ; i++)
	{
		if ((fib1 + fib0) < 10000000000)
		{
			fibNow = fib0 + fib1;
			printf("%lu", fibNow);
			fib0 = fib1;
			fib1 = fibNow;
			fib0first = fib0 / 10000000000;
			fib0second = fib0 % 10000000000;
			fib1first = fib1 / 10000000000;
			fib1second = fib1 % 10000000000;
		}
		else
		{
			fibFirstHalf = ((fib0first) + (fib1first));
			fibSecondHalf = ((fib0second) + (fib1second));
			printf("%lu%lu", fibFirstHalf, fibSecondHalf);
			fib0first = fib1first;
			fib1first = fibFirstHalf;
			fib0second = fib1second;
			fib1second = fibSecondHalf;
		}
		if (i < 98)
			printf(", ");
		else
			printf("\n");
	}
	fibNow = ((fib0 / 11) + (fib1 / 11));
	printf("%lu", fibNow);
	fibNow = ((fib0 % 11) + (fib1 % 11));
	printf("%lu\n", fibNow);
	return (0);
}
