#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * Description: print
 *
 * @s: input string
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
