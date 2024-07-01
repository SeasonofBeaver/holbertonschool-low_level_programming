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
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return(NULL);
}
