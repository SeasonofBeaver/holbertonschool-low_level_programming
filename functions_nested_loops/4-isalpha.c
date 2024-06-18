#include <stdio.h>
#include "main.h"

/**
 * _isalpha - begining
 *
 * Description: print if negative or positive
 *
 * @c: is input
 *
 * Return: 0 ends the program
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
