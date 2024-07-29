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
		if (h->string == NULL)
			printf("[0] (nul)\n");
		else
			printf("[%i] %s\n", h->length, h->string);
		h = h->next;
		length++;
	}
	return (length);
}
