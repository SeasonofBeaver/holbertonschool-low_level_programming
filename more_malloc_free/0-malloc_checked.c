#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - begining
 *
 * Description: print if negative or positive
 *
 * @b: size to allocate
 *
 * Return: 0 ends the program
 */

void *malloc_checked(unsigned int b)
{
	char *var;

	var = malloc(sizeof(char) * b);
	if (var == NULL)
		exit(98);
	return (var);
}
