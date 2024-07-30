#include "lists.h"

/**
 * free_dlistint - begining
 *
 * Description: free list
 *
 * @head: list input
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	head = NULL;
}
