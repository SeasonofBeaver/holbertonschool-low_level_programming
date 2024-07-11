#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * wordcounter - beginning
 *
 * @s: string
 *
 * Return: wordcount
 */


int wordcounter(char *s)
{
	int stillWord = 0, i, words = 0;

	for (i = 0 ; s[i] ; i++)
	{
		if ((s[i] != ' ') && (stillWord == 0))
		{
			stillWord = 1;
			words++;
		}
		else if (s[i] == ' ')
			stillWord = 0;
	}
	return (words);
}

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
	int i, j = 0, k, l, m, words, length;
	char **array;

	if ((str == NULL) || (str[0] == '\0'))
		return (NULL);
	words = wordcounter(str);
	if (words == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	array[words] = NULL;
	for (i = 0 ; i < words ; i++)
	{
		while (str[j] == ' ')
			j++;
		for (length = 0, m = j ; str[m] != ' ' ; m++, length++)
		;
		array[i] = malloc(sizeof(char) * (length + 1));
		if (array[i] == NULL)
		{
			for (l = 0 ; l < i ; l++)
				free(array[l]);
			free(array[words]);
			free(array);
			return (NULL);
		}
		for (k = 0 ; k < length ; k++, j++)
			array[i][k] = str[j];
		array[i][k] = '\0';
	}
	return (array);
}
