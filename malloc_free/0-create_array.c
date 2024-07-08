#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - begining
 *
 * Description: print if negative or positive
 *
 * @size: size of array
 *
 * @c: character
 *
 * Return: 0 ends the program
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	for (i = 0 ; i < size ; i++)
		str[i] = c;
	return (str);
}
