#include <stdio.h>
#include "main.h"

/**
 * print_sign - begining
 *
 * Description: print if negative or positive
 *
 * @n: is input
 *
 * Return: 0 ends the program
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
