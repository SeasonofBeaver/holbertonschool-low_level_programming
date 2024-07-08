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
	int i;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(*str));
	if (s == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		s[i] = str[i];
	return (s);
	free(s);
}
