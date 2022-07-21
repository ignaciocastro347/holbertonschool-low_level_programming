#include "lists.h"
/**
 * insert_dnodeint_at_index - inserta node with n value at index
 * @head: dlinked list
 * @in: index to set the node
 * @n: integer value
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int in, int n)
{
	dlistint_t *new, *aux = *head;
	unsigned int i = 0;

	if (in == 0)
		return (add_dnodeint(head, n));
	if (!aux)
		return (NULL);
	while (aux)
	{
		if (i == in - 1)
		{
			if (!aux->next)
				return (add_dnodeint_end(head, n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = aux->next;
			new->prev = aux;
			aux->next = new;
			aux = new->next;
			aux->prev = new;
			return (new);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
