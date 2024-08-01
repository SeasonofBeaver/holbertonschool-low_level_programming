#include "main.h"

/**
 * get_bit - Read the Code
 *
 * Describtion: get value of index in bin-num
 *
 * @n: decimal number
 *
 * @index: index of to be returned value
 *
 * Return: value of index
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setting;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setting = 1 << index;
	*n = *n | setting;
	return (1);
}
