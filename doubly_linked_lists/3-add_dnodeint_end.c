
#include "lists.h"
/**
`* add_dnodeint_end - add a  node to the end of a linked list
 * @head: dlinked list
 * @n: int value
 * Return: pointer to a dlinked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
		return (new);
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
