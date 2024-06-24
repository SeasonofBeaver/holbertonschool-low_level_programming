#include <stdio.h>
#include "main.h"

/**
 * _isupper - check the code
 *
 * Description: print
 *
 * @c: input
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
