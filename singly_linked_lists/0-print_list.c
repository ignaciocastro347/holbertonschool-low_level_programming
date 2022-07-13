#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - Print a linked list
 * @h: linked list
 * Return: Number of elements in a linked list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%lu] %s\n", strlen(h->str), h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
