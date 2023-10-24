#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements of linkint_t list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
