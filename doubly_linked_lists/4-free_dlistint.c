#include "lists.h"
/**
 * free_dlistint - free a dlinked list
 * @head: dlinked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
