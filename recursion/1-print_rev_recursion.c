#include "main.h"

/**
 * _print_rev_recursion - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\0');
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[0]);
	}
}
