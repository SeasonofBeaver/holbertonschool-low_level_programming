#include <stdio.h>
#include <limits.h>
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
	char i = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			n++;
			i = 1;
		}
		n *= -1;
	}

	if (n > 9)
		print_number(n / 10);
	if (i == 1)
		_putchar('0' + n + 1);
	else
		_putchar('0' + (n % 10));
}
