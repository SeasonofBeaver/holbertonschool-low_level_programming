#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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

/**
 * _realloc - begining
 *
 * Description: print if negative or positive
 *
 * @ptr: pointer for old loc
 *
 * @old_size: old size
 *
 * @new_size: new size
 *
 * Return: 0 ends the program
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer = NULL;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	_memcpy(pointer, ptr, old_size);
	free(ptr);
	return (pointer);
}
