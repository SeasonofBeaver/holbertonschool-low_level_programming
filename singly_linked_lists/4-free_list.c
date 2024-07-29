#include "lists.h"

/**
 * free_list - begining
 *
 * Description: free list
 *
 * @head: list input
 */

void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next;

	while (curr)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
	head = NULL;
}
