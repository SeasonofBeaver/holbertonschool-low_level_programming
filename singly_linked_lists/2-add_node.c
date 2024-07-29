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
	nodePtr temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->next = head;
	head = temp;
	head->str = str;
	return (head);
}
