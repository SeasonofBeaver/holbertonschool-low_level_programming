#include "main.h"

/**
 * _strlen_recursion - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{

	if (s[0] == '\0')
	{
		return;
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
