#include "main.h"
#include <stddef.h>

/**
 * _strstr - check the code
 *
 * Description: print
 *
 * @haystack: input string to search
 *
 * @needle: input string to find
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, counter;

	if (needle[0] == '\0')
		return (&haystack[0]);
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		if (haystack[i] == needle[0])
		{
			counter = i;
			for (j = 0 ; needle[j] != '\0' ; j++)
			{
				if (needle[j] != haystack[counter])
					break;
				counter++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
