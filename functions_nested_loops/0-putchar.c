#include <stdio.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

#include "main.h"

int main(void)
{
	char text[9] = "_putchar";
	int n = 0;

	for (n = 0; n < 8; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');
	return (0);
}
