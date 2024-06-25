#include <stdio.h>
#include "main.h"

/**
 * print_array - check the code
 *
 * Description: print
 *
 * @a: input 1
 *
 * @n: input 2
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar(a[i]);
	_putchar('\n');
}
