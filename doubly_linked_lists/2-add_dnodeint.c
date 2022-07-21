#include "lists.h"
/**
 * add_dnodeint - add a new node at the beggining of a list
 * @head: linked list
 * @n: int value
 * Return: pointer to a linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
