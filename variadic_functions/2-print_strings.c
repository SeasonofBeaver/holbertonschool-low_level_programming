#include "variadic_functions.h"

/**
 * print_strings - begining
 *
 * Description: print if negative or positive
 *
 * @separator: seperates numbers
 *
 * @n: numbers
 *
 * Return: 0 ends the program
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;

	va_start(pointer, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%s", va_arg(pointer, char *));
		if ((i + 1 != n) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(pointer);
	printf("\n");
}
