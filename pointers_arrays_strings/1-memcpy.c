#include "main.h"

/**
 * _memcpy - check the code
 *
 * Description: print
 *
 * @dest: input destination
 *
 * @src: input source
 *
 * @n: input length
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
