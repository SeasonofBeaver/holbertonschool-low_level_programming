#include "lists.h"

/**
 * get_dnodeint_at_index - begining
 *
 * Description: output specific element
 *
 * @head: list input
 *
 * @index: n-th element in list
 *
 * Return: list element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
		head = head->next;
	return (head);
}
