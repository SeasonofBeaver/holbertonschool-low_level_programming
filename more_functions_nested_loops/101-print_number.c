#include <stdio.h>
#include "main.h"

/**
 * print_number - check the code
 *
 * Description: print
 *
 * @n: input
 *
 * Return: Always 0.
 */

void print_number(int n)
{
	int i, j, numRN, lenNum, divide;

	lenNum = 0;
	divide = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = n ; i > 0 ; i /= 10)
		lenNum++;
	lenNum--;
	for (i = n ; i > 0 ; i %= divide)
	{
		divide = 1;
		for (j = 0 ; j < lenNum ; j++)
			divide = divide * 10;
		numRN = i / divide;
		lenNum--;
		_putchar(numRN + '0');
	}
}
