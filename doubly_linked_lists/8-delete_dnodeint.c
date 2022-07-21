#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: dlinked list
 * @idx: index to set the node
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx)
{
	dlistint_t *aux = *head, *next, *prev;
	unsigned int i = 0;

	if (!aux)
		return (-1);
	if (idx == 0)
	{
		next = aux->next;
		free(aux);
		*head = next;
		return (1);
	}
	while (aux)
	{
		if (i == idx - 1)
		{
			if (!aux->next)
				return (-1);
			prev = aux;
			aux = aux->next;
			next = aux->next ? aux->next : NULL;
			prev->next = next;
			if (next)
				next->prev = prev;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
	return (-1);
}
