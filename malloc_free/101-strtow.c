#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * strtow - begining
 *
 * Description: print if negative or positive
 *
 * @str: string
 *
 * Return: 0 ends the program
 */

char **strtow(char *str)
{
	int i, j = 0, k, l, m, words = 0, length, stillWord = 0;
	char **array;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
	{
		if ((str[i] != ' ') && (stillWord == 0))
		{
			stillWord = 1;
			words++;
		}
		else if (str[i] == ' ')
			stillWord = 0;
	}
	array = (char **)malloc(sizeof(char *) * words);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < words ; i++)
	{
		while (str[j] == ' ')
			j++;
		for (length = 0, m = j ; str[m] != ' ' ; m++, length++)
		;
		array[i] = malloc(sizeof(char) * length);
		if (array[i] == NULL)
		{
			for (l = 0 ; l < i ; l++)
				free(array[l]);
			free(array);
			return (NULL);
		}
		for (k = 0 ; k < length ; k++, j++)
			array[i][k] = str[j];
		array[i][k] = '\0';
	}
	return (array);
}
