#include "main.h"

/**
 * reset_to_98 - check the code
 *
 * Description: print
 *
 * @n: input
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
