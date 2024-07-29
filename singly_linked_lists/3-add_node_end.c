#include "lists.h"

/**
 * _strlen - check the code
 *
 * Description: print
 *
 * @s: input
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	return (length);
}

/**
 * add_node_end - begining
 *
 * Description: print list
 *
 * @head: list input
 *
 * @str: string to put in
 *
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *tail = *head;
	char *string;

	if (!str)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	string = strdup(str);
	if (!string)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(string);
	temp->str = string;
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	while (tail->next)
		tail = tail->next;
	tail->next = temp;
	return (tail);
}
