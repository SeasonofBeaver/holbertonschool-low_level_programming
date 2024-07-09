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

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(char) * b);
	if (str == NULL)
		return (98);
	return (str);
}
