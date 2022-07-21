#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index of dlinked list
 * @head: dlinked list
 * @index: position of node to return
 * Return: pointer to a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
