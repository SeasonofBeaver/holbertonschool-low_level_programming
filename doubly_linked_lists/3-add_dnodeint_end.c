#include "lists.h"

/**
 * add_dnodeint_end - begining
 *
 * Description: add element at end
 *
 * @head: list input
 *
 * @n: number input
 *
 * Return: list head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	list_t *temp;
	list_t *tail = *head;
	int number;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	number = n;
	temp->n = number;
	temp->next = NULL;
	if (!*head)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	while (tail->next)
		tail = tail->next;
	temp->prev = tail;
	tail->next = temp;
	return (tail);
}
