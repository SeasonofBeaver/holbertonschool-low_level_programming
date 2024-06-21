#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, fibSum;
	unsigned long fib1Half1, fib1Half2, fib2Half1, fib2Half2;
	unsigned long half1, half2;

	for (count = 1; count <= 92; count++)
	{
		fibSum = fib1 + fib2;
		printf("%lu, ", fibSum);
		fib1 = fib2;
		fib2 = fibSum;
	}
	fib1Half1 = fib1 / 10000000000;
	fib2Half1 = fib2 / 10000000000;
	fib1Half2 = fib1 % 10000000000;
	fib2Half2 = fib2 % 10000000000;
	for (count = 93; count <= 98; count++)
	{
		half1 = fib1Half1 + fib2Half1;
		half2 = fib1Half2 + fib2Half2;
		if (fib1Half2 + fib2Half2 > 9999999999)
		{
			half1++;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		else
			printf("\n");
		fib1Half1 = fib2Half1;
		fib1Half2 = fib2Half2;
		fib2Half1 = half1;
		fib2Half2 = half2;
	}
	return (0);
}
