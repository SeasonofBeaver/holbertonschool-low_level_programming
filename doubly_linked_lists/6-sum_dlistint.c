#include "lists.h"

/**
 * sum_dlistint - begining
 *
 * Description: output sum of all numbers in list
 *
 * @head: list input
 *
 * Return: sum of numbers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
