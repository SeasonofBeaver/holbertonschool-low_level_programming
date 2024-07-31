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
	unsigned int decimal = 0, len, multiply = 1;

	if (!b)
		return (0);
	for (len = 0 ; b[len] != '\0' ; len++)
	;
	for (; len > 0 ; len--)
	{
		if (atoi(b[len]) != 1 || atoi(b[len]) != 0)
			return (0);
		decimal += multiply * atoi(b[len]);
		multilpy *= 2;
	}
	return (decimal);
}
