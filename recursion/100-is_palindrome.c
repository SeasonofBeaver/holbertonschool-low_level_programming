#include "main.h"

char *reverse_string(char *string)
{
	if (string[0] == '\0')
	{
		return (string);
	}
	return (reverse_string(string + 1) + string[0]);
}

int testIfPalindrom(char *str, char *empty)
{
	empty = reverse_string(str);
	if (empty == str)
		return (1);
	return (0);
}

/**
 * _puts_recursion - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	if (testIfPalindrom(s, s) == 1)
		return (1);
	return (0);
}
