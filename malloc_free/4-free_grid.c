#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - begining
 *
 * Description: print if negative or positive
 *
 * @grid: array
 *
 * @height: height of array
 *
 * Return: 0 ends the program
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
}
