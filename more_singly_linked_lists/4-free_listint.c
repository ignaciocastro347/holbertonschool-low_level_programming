#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: linked list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
