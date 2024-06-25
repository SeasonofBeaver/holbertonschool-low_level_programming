#include <stdio.h>
#include "main.h"

/**
 * reverse_array - check the code
 *
 * Description: print
 *
 * @a: array
 *
 * @n: length of array
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0 ; i < (n / 2) ; i++)
	{
		temp = a[i];
		a[i] = a[n - i + 1];
		a[n - i + 1] = temp;
	}
}
