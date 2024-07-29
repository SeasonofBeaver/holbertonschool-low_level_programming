#include "lists.h"

/**
 * list_len - begining
 *
 * Description: get length of list
 *
 * @h: list input
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	int length;

	for (length = 0 ; h != NULL ; h = h->next, length++)
	;
	return (length);
}
