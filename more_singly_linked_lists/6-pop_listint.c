#include "lists.h"
/**
 * pop_listint - delete the header node of a linked list
 * @head: linked list
 * Return: 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n;

	if (!(*head))
		return (0);
	aux = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = aux;
	return (n);
}
