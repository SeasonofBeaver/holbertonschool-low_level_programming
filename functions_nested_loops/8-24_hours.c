#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar('0' + i);
			}
			else
				_putchar(i);
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			_putchar('\n');
		}
	}
}
