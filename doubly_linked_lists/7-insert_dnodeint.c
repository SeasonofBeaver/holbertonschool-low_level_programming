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
	dlistint_t *temp;
	dlistint_t *tail = *head;
	dlistint_t *next;
	int number, i = 0;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	number = n;
	temp->n = number;
	if (!*head)
	{
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (temp);
	}
	while (i < idx)
	{
		tail = tail->next;
		i++;
	}
	temp->prev = tail;
	next = tail->next;
	temp->next = next;
	tail->next = temp;
	return (tail);
}
