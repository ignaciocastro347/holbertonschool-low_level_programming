#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - print int values in list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
