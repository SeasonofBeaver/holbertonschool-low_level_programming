#include "lists.h"

/**
 * dlistint_len - begining
 *
 * Description: return length of list
 *
 * @h: list input
 *
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int length;

	for (length = 0 ; h != NULL ; h = h->next, length++)
	;
	return (length);
}
