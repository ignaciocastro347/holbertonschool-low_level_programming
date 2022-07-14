#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - print int values in list
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
