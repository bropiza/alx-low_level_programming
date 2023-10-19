#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints elements of the list list_t
 * @h: the list_t list
 *
 * Return: Number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		c++;
		h = h->next;
	}

	return (c);
}
