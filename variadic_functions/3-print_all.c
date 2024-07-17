#include "variadic_functions.h"

/**
 * print_all - begining
 *
 * Description: print if negative or positive
 *
 * @format: what format the input is
 *
 * Return: 0 ends the program
 */

void print_all(const char * const format, ...)
{
	va_list pointer;
	char  *str, *sep = "";
	unsigned int i = 0;

	va_start(pointer, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(pointer, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(pointer, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(pointer, double));
					break;
				case 's':
					str = va_arg(pointer, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(pointer);
}
