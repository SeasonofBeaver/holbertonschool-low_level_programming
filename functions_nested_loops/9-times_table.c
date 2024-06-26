#include <stdio.h>
#include "main.h"

/**
 * times_table - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int row;
	int column;
	int product;
	int leftdigit;
	int rightdigit;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			product = row * column;
			leftdigit = product / 10;
			rightdigit = product % 10;

			if (column == 0)
				_putchar('0');
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + rightdigit);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(leftdigit + '0');
				_putchar(rightdigit + '0');
			}
		}
		_putchar('\n');
	}
}
