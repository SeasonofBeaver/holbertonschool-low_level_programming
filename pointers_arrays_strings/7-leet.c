#include <stdio.h>
#include "main.h"

/**
 * leet - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

char *leet(char *s)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char leet[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
		for (j = 0 ; j < 5 ; j++)
			if ((s[i] == letters[j]) || (s[i] == (letters[j] - 32)))
				s[i] = leet[j];
	return (s);
}
