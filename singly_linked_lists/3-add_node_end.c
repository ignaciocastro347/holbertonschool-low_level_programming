#include "lists.h"
/**
 * add_node_end - add a node at the beginning of a list
 * @head: destiny list
 * @str: string value
 * Return: a pointer to the new node of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head)
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new;
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head)
		return (*head);
	*head = new;
	return (new);
}
