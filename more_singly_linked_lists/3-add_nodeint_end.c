#include "lists.h"
/**
 * add_nodeint_end - add a  node to the end of a linked list
 * @head: linked list
 * @n: int value
 * Return: pointer to a linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		return (*head);
	}
	*head = new;
	return (new);
}
