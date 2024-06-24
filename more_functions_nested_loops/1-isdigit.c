#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check the code
 *
 * Description: print
 *
 * @c: input
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
