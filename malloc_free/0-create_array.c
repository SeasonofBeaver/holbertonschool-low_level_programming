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

	if (size == 0)
		return (NULL);
	str = malloc(size);
	str[0] = c;
	return (str);
}
