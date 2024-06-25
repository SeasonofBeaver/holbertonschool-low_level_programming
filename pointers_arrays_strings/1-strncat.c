#include <stdio.h>
#include "main.h"

/**
 * _strncat - check the code
 *
 * Description: print
 *
 * @dest: input 1
 *
 * @src: input 2
 *
 * @n: input 3
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;

	length = 0;
	j = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
		length++;
	for (i = length ; i < (length + n) ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
