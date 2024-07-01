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
	int i, sum, length;

	sum = 0;
	for (length = 0 ; a[length] != '\0' ; length++)
	;
	for (i = 0 ; i < length ; i += (size + 1))
		sum += a[i];
	printf("%i, ", sum);
	sum = 0;
	for (i = (size - 1) ; i < length - 2 ; i += (size - 1)
		sum += a[i];
	printf("%i\n", sum);
}
