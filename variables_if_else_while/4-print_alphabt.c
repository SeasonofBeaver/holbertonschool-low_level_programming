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
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if ((ch != 'e') & (ch != 'q'))
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
