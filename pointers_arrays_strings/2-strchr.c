#include <stddef.h>
#include "main.h"

/**
 * _strchr - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * @c: input character
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i, j;

	for (j = 0 ; s[j] != '\0' ; j++)
	;
	for (i = 0 ; i <= j ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
