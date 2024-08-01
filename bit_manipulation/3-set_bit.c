#include "main.h"

/**
 * set_bit - Read the Code
 *
 * Describtion: set value at index to 1
 *
 * @n: decimal number
 *
 * @index: index of to be returned value
 *
 * Return: 1 if done -1 if not
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
