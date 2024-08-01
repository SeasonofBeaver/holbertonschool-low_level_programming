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
	unsigned long int result, num, multiply, add = 1, i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = n
	multiply = 1 << index;
	result = num & multiply;
	if (result == multiply)
		return (-1);
	for (i = 0 ; i < index ; add *= 2, i++)
	;
	n += add;
	return (1);
}
