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
	int *var;

	var = malloc(sizeof(int) * b);
	if (var == NULL)
		exit(98);
	return (var);
}
