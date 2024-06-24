#include <stdio.h>
#include "main.h"

/**
 * print_triangle - check the code
 *
 * Description: print
 *
 * @size: input
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1 ; i <= size ; i++)
	{
		j = size - i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		for (j = i ; j > 0 ; j--)
			_putchar('#');
		if (i != size)
			_putchar('\n');
	}
	_putchar('\n');
}
