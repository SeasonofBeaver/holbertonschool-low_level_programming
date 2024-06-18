#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet: prints the alphabet
 *
 * Description: print
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet: prints the alphabet
 *
 * Description: print abc
 */

void print_alphabet(void)
{
	char text[25] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');
	return (0);
}
