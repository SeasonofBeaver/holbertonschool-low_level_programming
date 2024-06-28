#include "mainadvanced.h"

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
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n++;
		n = -n;
		i++;
	}

	if (n > 9)
		print_number(n / 10);
	if (i > 0)
		_putchar('0' + ((n + 1) % 10));
	else
		_putchar('0' + (n % 10));
}
