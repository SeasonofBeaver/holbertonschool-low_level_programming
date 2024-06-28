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
				printf("%08x: ", i);
				for (j = i ; j < i + 10 ; j++)
				{
					if ((j >= size) && (j % 2 == 1))
						printf("   ");
					else if ((j >= size) && (j % 2 == 0))
						printf("  ");
					else if (j % 2 == 1)
						printf("%02x ", b[j]);
					else
						printf("%02x", b[j]);
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
