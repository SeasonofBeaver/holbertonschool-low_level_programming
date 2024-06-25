#include <stdio.h>
#include "main.h"

/**
 * string_toupper - check the code
 *
 * Description: print
 *
 * @str: input
 *
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
	}
	return (str);
}
