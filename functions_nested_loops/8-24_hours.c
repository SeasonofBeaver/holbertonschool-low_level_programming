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
	int k;
	int l;

	for (i = 0 ; i < 3 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if ((i = 2) && (j = 4))
				break;
			for (k = 0 ; k < 6 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
