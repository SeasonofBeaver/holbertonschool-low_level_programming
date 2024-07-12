#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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
	if (newsize == old_size)
		return (ptr);
	if ((newsize == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (newsize != oldsize)
	{
		ptr = malloc(newsize);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
}
