#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - begining
 *
 * Description: print if negative or positive
 *
 * @size: len of array
 *
 * @array: array of ints
 *
 * @action: pointer for funtion
 *
 * Return: 0 ends the program
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
