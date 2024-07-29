#include "lists.h"

/**
 * print_list - begining
 *
 * Description: print list
 *
 * @h: list input
 *
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	nodePtr temp = malloc(sizeof(node));
	if (!temp)
		return (NULL);
	temp->next = head;
	head = temp;
	return (head);
}
