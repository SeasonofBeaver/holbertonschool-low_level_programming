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
	unsigned int i, j, further = 0, length = 0, newLength = 0, stillGoing = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = further ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				if (stillGoing != i-1)
				{
					if (newLength > length)
						length = newLength;
					newLength = 0;
					further = 0;
				}
				stillGoing = i;
				newLength++;
				further = j;
				break;
			}
		}	
	}
	return (length);
}
