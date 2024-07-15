#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - begining
 *
 * Description: print if negative or positive
 *
 * @size: len of array
 *
 * @array: array of ints
 *
 * @cmp: pointer for funtion
 *
 * Return: 0 ends the program
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = -1;

	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		check = cmp(array[i]);
		if (check > 0)
			return (i);
	}
	return (-1);
}
