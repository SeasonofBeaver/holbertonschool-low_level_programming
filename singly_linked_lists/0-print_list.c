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

	while (h.next)
	{
		if (h.str == NULL)
			printf("[0] (nul)\n");
		else
			printf("[%i] %s\n", h->length, h->str);
		h = h.next;
		length++;
	}
	return (length);
}
