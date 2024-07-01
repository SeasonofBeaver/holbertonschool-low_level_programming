#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *
 * Description: print
 *
 * @a: input 2d array
 *
 * @size: input size
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0 ; i < size ; i++)
		sum += a[i][i];
	printf("%i, ", sum);
	sum = 0;
	j = 0;
	for (i = size - 1 ; i >= 0 ; i--)
	{
		sum += a[j][i];
		j++
	}
	printf("%i\n", sum);
}
