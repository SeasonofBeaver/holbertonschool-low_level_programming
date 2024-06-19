#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - check the code
 *
 * Description: print
 *
 * @n: input
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
		for (i = n ; i < 98 ; i++)
			printf("%i, ", i);
	else if (n > 98)
		for (i = n ; i > 98 ; i--)
			printf("%i, ", i);
	printf("98");
	printf("\n");
}
