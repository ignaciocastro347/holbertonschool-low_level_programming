#include "lists.h"
/**
 * insert_nodeint_at_index - inserta node with n value at index
 * @head: linked list
 * @idx: index to set the node
 * @n: integer value
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *aux;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!head)
		return (NULL);
	aux = *head;
	while (aux)
	{
		if (i == idx)
		{
			new->n = n;
			if (i == 0)
			{
				new->next = *head;
				*head = new;
			}
			else if (!aux->next)
			{
				new->n = n;
				new->next = NULL;
				aux->next = new;
			}
			else
			{
				new->next = aux->next;
				aux->next = new;
			}
			return (new);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
