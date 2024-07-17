#include "variadic_functions.h"

/**
 * sum_them_all - begining
 *
 * Description: print if negative or positive
 *
 * @n: numbers
 *
 * Return: 0 ends the program
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list pointer;

	if (n == 0)
		return (0);
	va_start(pointer, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(pointer, int);
	va_end(pointer);
	return (sum);
}
