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
	int length = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nul)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
