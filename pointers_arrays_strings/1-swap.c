#include <stdio.h>
#include "main.h"

/**
 * swap_int - check the code
 *
 * Description: print
 *
 * @a: input 1
 *
 * @b: input 2
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
