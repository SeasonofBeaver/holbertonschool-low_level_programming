#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - begining
 *
 * Description: print if negative or positive
 *
 * @c: is input
 *
 * Return: 0 ends the program
 */

int print_last_digit(int c)
{
	int last
	last = c % 10;
	_putchar(last);
	return (last);
}
