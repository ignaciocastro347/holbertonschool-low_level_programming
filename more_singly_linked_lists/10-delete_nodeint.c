#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: linked list
 * @idx: index to set the node
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *aux = *head, *next, *prev;
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
			prev->next = aux->next ? aux->next : NULL;
			free(aux);
			return (1);
		}
		aux = aux->next;
		i++;
	}
	return (-1);
}
