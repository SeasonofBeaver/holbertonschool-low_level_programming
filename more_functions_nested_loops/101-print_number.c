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

	lenNum
	for (i = n ; i > 0 ; i /= 10)
		lenNum++
	lenNum--
	if (n < 0)
		_putchar('-');
	for (i = n ; i > 0 ; i /= 10)
	{
		for (j = 0 ; j < lenNum ; j++)
			divide = divide * 10;
		numRN = i / (divide);
		_putchar(numRN + '0');
	}
	_putchar('\n');
}
