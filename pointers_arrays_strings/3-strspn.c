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
	unsigned int i, j, length = 0, newLength = 0, stillGoing = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				if (stillGoing != j-1)
				{
					if (newLength > length)
						length = newLength;
					newLength = 0;
				}
				stillGoing = j;
				newLength++;
				break;
			}
		}	
	}
	return (length);
}
