#include "main.h"

/**
 * _strspn - check the code
 *
 * Description: print
 *
 * @s: input memory area
 *
 * @accept: input contant character
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == accept)
			length++;
	}
	return (length);
}
