#include <stdio.h>
#include "main.h"

/**
 * cap_string - check the code
 *
 * Description: print
 *
 * @str: input
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i, nextLetterCap;

	nextLetterCap = 1;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z') && (nextLetterCap == 1))
		{
			str[i] = str[i] - 32;
			nextLetterCap = 0;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z') && (nextLetterCap == 1))
			nextLetterCap = 0;
		else if ((str == ' ') || (str == '	') || (str == '\n') || (str == ','))
			nextLetterCap = 1;
		else if ((str == '.') || (str == '!') || (str == '?') || (str == '"'))
			nextLetterCap = 1;
		else if ((str == '{') || (str == '}') || (str == ';') || (str == ')'))
			nextLetterCap = 1;
		else if (str == '(')
			nextLetterCap = 1;
	}
	return (str);
}
