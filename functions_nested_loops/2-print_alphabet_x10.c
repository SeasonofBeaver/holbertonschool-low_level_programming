#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
