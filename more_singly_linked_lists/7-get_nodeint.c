#include "lists.h"
/**
 * get_nodeint_at_index - get node at index of linked list
 * @head: linked list
 * @index: position of node to return
 * Return: pointer to a node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
