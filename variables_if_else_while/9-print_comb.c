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
	int n;

	for (n = '0' ; n <= '8' ; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
