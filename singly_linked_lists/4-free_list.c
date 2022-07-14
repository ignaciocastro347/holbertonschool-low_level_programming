#include "lists.h"
/**
 * free_list - free a linked list
 * @head: linked list
 */
void free_list(list_t *head)
{
	list_t *aux;
	while (head)
	{
		free(head->str);
		aux = head->next;
		free(head);
		head = aux;
	}
}
