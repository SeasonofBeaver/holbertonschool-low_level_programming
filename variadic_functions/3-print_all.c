#include "variadic_functions.h"

/**
 * printChar - beginning
 *
 * @pointer: input to be printed
 */

void printChar(va_list pointer)
{
	printf("%c", va_arg(pointer, int));
}

/**
 * printInt - beginning
 *
 * @pointer: input
 */

void printInt(va_list pointer)
{
	printf("%i", va_arg(pointer, int));
}

/**
 * printFloat - beginning
 *
 * @pointer: input
 */

void printFloat(va_list pointer)
{
	printf("%f", va_arg(pointer, double));
}

/**
 * printString - beginning
 *
 * @pointer: input
 */

void printString(va_list pointer)
{
	char *str;

	str = va_arg(pointer, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

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
	char  *sep = "";
	unsigned int i = 0, j = 0;

	search list[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString},
		{'\0', NULL}
	};

	va_start(pointer, format);

	while ((format != NULL) && (format[i] != '\0'))
	{
		while (j < 4)
		{
			if (*list[j].type == format[i])
			{
				printf("%s", sep);
				list[j].function(pointer);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(pointer);
}
