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
	int i, byte;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (i % 10 == 0)
			{
				if (i != 0)
					printf("\n");
				byte = b[i] & 0xFF;
				printf("%i: ", byte);
			}
			if (isprint(b[i]) != 0)
				printf("%c", b[i]);
			else
				printf(".");
		}
	}
	printf("\n");
}
