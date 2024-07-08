#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - begining
 *
 * Description: print if negative or positive
 *
 * @width: width of array
 *
 * @height: height of array
 *
 * Return: 0 ends the program
 */

int **alloc_grid(int width, int height)
{
	int *array[height][width] = {0};

	if ((width <= 0) || (height <= 0))
		return (NULL);
	return (array);
}
