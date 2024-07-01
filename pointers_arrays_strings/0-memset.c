#include "main.h"

/**
 * _memset - check the code
 *
 * Description: print
 *
 * @s: input memory area
 *
 * @b: input contant byte
 *
 * @n: input length
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
