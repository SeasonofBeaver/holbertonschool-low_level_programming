#include <stdio.h>
#include "main.h"

/**
 * cap_string - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i, nextLetterCap;

	nextLetterCap = 1;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z') && (nextLetterCap == 1))
		{
			s[i] = s[i] - 32;
			nextLetterCap = 0;
		}
		else if ((s[i] >= 'A') && (s[i] <= 'Z') && (nextLetterCap == 1))
			nextLetterCap = 0;
		else if ((s[i] == ' ') || (s[i] == '	') || (s[i] == '\n') || (s[i] == ','))
			nextLetterCap = 1;
		else if ((s[i] == '.') || (s[i] == '!') || (s[i] == '?') || (s[i] == '"'))
			nextLetterCap = 1;
		else if ((s[i] == '{') || (s[i] == '}') || (s[i] == ';') || (s[i] == ')'))
			nextLetterCap = 1;
		else if (s[i] == '(')
			nextLetterCap = 1;
	}
	return (s);
}
