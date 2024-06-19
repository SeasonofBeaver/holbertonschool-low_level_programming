#include <stdio.h>
#include <string.h>

/**
 * main - begining
 *
 * Description: print if negative or positive
 *
 * Return: 0 ends the program
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, sizeof(char), strlen(str), stderr);
	return (0);
}
