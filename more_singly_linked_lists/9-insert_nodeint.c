#include "lists.h"
#include "2-add_nodeint.c"
/**
 * insert_nodeint_at_index - inserta node with n value at index
 * @head: linked list
 * @idx: index to set the node
 * @n: integer value
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux = *head;
	unsigned int i = 0;

	if (idx == 0)
		return (add_nodeint(head, n));
	if (!aux)
		return (NULL);
	while (aux)
	{
		if (i == idx - 1)
		{
			if (!aux->next)
				return (add_nodeint_end(head, n));
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = aux->next;
			aux->next = new;
			return (new);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
