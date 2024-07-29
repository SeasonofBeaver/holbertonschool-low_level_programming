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

size_t list_len(const list_t *h)
{
	int length;

	for (length = 0 ; h != NULL ; h = h->next)
	;
	return (length);
}
