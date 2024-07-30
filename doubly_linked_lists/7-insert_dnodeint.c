#include "lists.h"

/**
 * insert_dnodeint_at_index - begining
 *
 * Description: add element at index
 *
 * @h: list input
 *
 * @idx: index where to add element
 *
 * @n: number input
 *
 * Return: list head
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
