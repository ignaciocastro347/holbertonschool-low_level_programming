#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	if (*head)
		while (*head)
		{
			aux = (*head)->next;
			free(*head);
			*head = aux;
		}
}
