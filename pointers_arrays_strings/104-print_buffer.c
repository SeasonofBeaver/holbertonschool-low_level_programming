#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - check the code
 *
 * Description: print
 *
 * @b: buffer
 *
 * @size: size of buffer
 *
 * Return: Always 0.
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (i % 10 == 0)
			{
				if (i != 0)
					printf("\n");
				printf("0%02X: ", b[i]);
				for (j = i ; j < i + 10 ; j++)
				{
					if (j >= size)
					{
						if (j % 2 == 1)
							printf("   ");
						else
							printf("  ");
					}
					else
					{
						if (j % 2 == 1)
							printf("%x ", b[j]);
						else
							printf("%x", b[j]);
					}
				}

			}
			if (isprint(b[i]) != 0)
				printf("%c", b[i]);
			else
				printf(".");
		}
	}
	printf("\n");
}
