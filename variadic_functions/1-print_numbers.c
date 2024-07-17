#include "variadic_functions.h"

/**
 * print_numbers - begining
 *
 * Description: print if negative or positive
 *
 * @separator: seperates numbers
 *
 * @n: numbers
 *
 * Return: 0 ends the program
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(pointer, int);
		if ((i + 1 != n) && (seperator != NULL))
			printf("%s", seperator);
	}
	va_end(pointer);
	printf("\n");
}
