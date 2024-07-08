#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - begining
 *
 * Description: print if negative or positive
 *
 * @str: sting
 *
 * Return: 0 ends the program
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(*str);
	if (s == NULL)
		return (NULL);
	s = str;
	return (s);
	free(s);
}
