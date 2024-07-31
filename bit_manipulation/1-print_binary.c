#include "main.h"

/**
 * print_binary - Read the Code
 *
 * Describtion: print binary number
 *
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int devider = 1, prevDiv = 0, len, hold;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (len = 0 ; devider <= n ; len++, devider *= 2)
	;
	for (; len > 0 ; len--)
	{
		devider = 1;
		while ((devider * 2) <= n)
			devider *= 2;
		if (n == 0 && prevDiv == 2)
		{
			_putchar('0');
			return;
		}
		if ((prevDiv == devider * 2) || prevDiv == 0)
		{
			_putchar('1');
			n -= devider;
		}
		else
		{
			hold = devider;
			while (prevDiv > devider * 2)
			{
				_putchar('0');
				devider *= 2;
				len--;
			}
			devider = hold * 2;
		}
		prevDiv = devider;
	}
}
