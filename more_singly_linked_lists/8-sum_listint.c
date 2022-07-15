#include "lists.h"
/**
 * sum_listint - sum n values from nodes of a linked list
 * @head: linked list
 * Return: sum of n values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
