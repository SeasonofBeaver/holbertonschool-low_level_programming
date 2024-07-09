#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - begining
 *
 * Description: print if negative or positive
 *
 * @nmemb: number of elements
 *
 * @size: size of elements
 *
 * Return: 0 ends the program
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	return (str);
}
