#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (&h->n != NULL)
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
