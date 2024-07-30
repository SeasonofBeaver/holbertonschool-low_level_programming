#include "lists.h"

/**
 * add_dnodeint - begining
 *
 * Description: add element at beginning
 *
 * @head: list input
 *
 * @n: number to put in
 *
 * Return: list head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	int number;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	number = n;
	temp->n = number;
	temp->prev = NULL;
	if (*head)
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
