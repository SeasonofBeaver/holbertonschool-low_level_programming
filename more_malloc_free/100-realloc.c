#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memcpy - copies memory area
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
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
