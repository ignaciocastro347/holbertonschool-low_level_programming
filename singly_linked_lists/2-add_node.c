#include "lists.h"
/**
 * add_node - add a node at the beginning of a list
 * @head: destiny list
 * @str: string value
 * Return: a pointer to the new node of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
