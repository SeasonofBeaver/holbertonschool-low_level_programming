#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Description: print
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');
}
