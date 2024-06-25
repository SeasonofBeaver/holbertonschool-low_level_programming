#include <stdio.h>
#include "main.h"

/**
 * _strcmp - check the code
 *
 * Description: print
 *
 * @s1: input string 1
 *
 * @s2: input string 2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i, compare, lengthS1, lengthS2;

	compare = 0;
	lengthS1 = 0;
	lengthS2 = 0;
	for (i = 0 ; s1[i] != '\0' ; i++)
		lengthS1++
	for (i = 0 ; s2[i] != '\0' ; i++)
		lengthS2++
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			compare = lengthS1 - lengthS2;
		}
	}

	return (compare);
}
