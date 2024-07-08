#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - begining
 *
 * Description: print if negative or positive
 *
 * @s1: sting
 *
 * @s2: string
 *
 * Return: 0 ends the program
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, l;

	for (j = 0 ; s1[j] != '\0' ; j++)
	;
	for (k = 0 ; s2[k] != '\0' ; k++)
	;
	k++;
	str = malloc(j + k);
	if (str == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		str[i] = s1[i];
	for (i = j , l = 0 ; s2[l] != '\0' ; i++ , l++)
		str[i] = s2[l];
	str[i] = '\0';
	return (str);
	free(str);
}
