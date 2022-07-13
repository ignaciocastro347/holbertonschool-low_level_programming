#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * list_len - Print the length of a linked list
 * @h: linked list
 * Return: Number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
