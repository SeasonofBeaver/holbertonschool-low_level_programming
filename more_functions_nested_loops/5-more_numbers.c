#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;
	
	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i < 15 ; i++)
		{
			_putchar('0' + (i % 10));
			if (i > 9)
				_putchar('0' + (i / 10));
		}
		_putchar('\n');
	}
}
