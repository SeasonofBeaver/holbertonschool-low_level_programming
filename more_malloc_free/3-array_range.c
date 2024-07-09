#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - begining
 *
 * Description: print if negative or positive
 *
 * @min: min number
 *
 * @max: max number
 *
 * Return: 0 ends the program
 */

int *array_range(int min, int max)
{
	int i;
	int *var;

	if (min > max)
		return (NULL);
	var = malloc(sizeof(int) * (max + 1 - min));
	if (var == NULL)
		return (NULL);
	for (i = 0 ; i <= max - min ; i++)
		var[i] = min + i;
	return (var);
}
