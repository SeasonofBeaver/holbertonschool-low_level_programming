#include <stdio.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (l = j + 1 ; l < 10 ; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if ((i != 9) || (j != 8) || (k != 9) || (l != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}	
			}
		}
	}
	putchar('\n');
	return (0);
}
