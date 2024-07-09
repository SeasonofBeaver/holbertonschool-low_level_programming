#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - begining
 *
 * Description: print if negative or positive
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: len string 2 return
 *
 * Return: 0 ends the program
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, k = 0, l;

	if (s1 != NULL)
		for (j = 0 ; s1[j] != '\0' ; j++)
		;
	if (s2 != NULL)
		for (k = 0 ; s2[k] != '\0' ; k++)
		;
	k++;
	if (k > n)
		k = n;
	str = malloc(j + k);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0 ; s1[i] != '\0' ; i++)
			str[i] = s1[i];
	if (s2 != NULL)
		for (i = j, l = 0 ; l < k ; i++, l++)
			str[i] = s2[l];
	str[i] = '\0';
	return (str);
}
