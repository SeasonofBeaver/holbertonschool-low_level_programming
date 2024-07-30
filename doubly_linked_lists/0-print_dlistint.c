#include "lists.h"

/**
 * print_dlistint - begining
 *
 * Description: print list
 *
 * @h: list input
 *
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		printf("%i", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
