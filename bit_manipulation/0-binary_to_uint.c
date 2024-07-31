#include "main.h"

/**
 * binary_to_uint - Read the Code
 *
 * Describtion: converts bin to decimal
 *
 * @b: binary number
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, multiply = 1, convNum;
	int len;

	if (!b)
		return (0);
	for (len = 0 ; b[len] != '\0' ; len++)
	;
	for (len-- ; len >= 0 ; len--)
	{
		convNum = b[len] - '0';
		if (convNum != 1 && convNum != 0)
			return (0);
		decimal += multiply * convNum;
		multiply *= 2;
	}
	return (decimal);
}
