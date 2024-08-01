#include "main.h"

/**
 * flip_bits - Read the Code
 *
 * Describtion: sees how many flips are needed to change n to m
 *
 * @n: decimal number 1
 *
 * @m: decimal number 2
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int changes = n ^ m;
	int flips = 0;

	while (changes)
	{
		if (1 & changes)
			flips++;
		changes = changes >> 1;
	}
	return (flips);
}
