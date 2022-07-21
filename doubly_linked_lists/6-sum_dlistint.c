#include "lists.h"
/**
 * sum_dlistint - sum n values from nodes of a dlinked list
 * @head: linked list
 * Return: sum of n values
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
