#include "lists.h"

/**
 * add_node - begining
 *
 * Description: print list
 *
 * @head: list input
 *
 * @str: string to put in
 *
 * Return: size of list
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
	temp->next = *head;
	head->prev = temp;
	*head = temp;
	return (*head);
}
