#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - check the code
 *
 * Description: print
 *
 * @n: input
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while ((i < n) && (n > 0))
	{
		for (j = 0 ; j < i ; j++)
			_putchar(' ');
		_putchar('\\');
		i++;
		if (i != n)
			_putchar('\n');
	}
	_putchar('\n');
}
