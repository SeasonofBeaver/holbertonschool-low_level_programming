#include "lists.h"

/**
 * delete_dnodeint_at_index - begining
 *
 * Description: delete element at index
 *
 * @head: list input
 *
 * @index: index of to be deleted element
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
