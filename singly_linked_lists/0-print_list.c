#include "lists.h"

/**
 * print_list - begining
 *
 * Description: print list
 *
 * @h: list input
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	int length = 0, i;
	list_t curr = &h;

	while (list_t.next)
	{
		curr = curr->next;
		_putchar('[');
		_putchar(curr.length);
		_putchar(']');
		_putchar(' ');
		for (i = 0 ; i < curr.length ; i++)
		{
			_putchar(curr.str[i]);	
		}
		if (curr.str == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		_putchar('\n');
		length++;
	}
	return (length);
}
