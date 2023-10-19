#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - writes the elements of a list_t
 * @h: the list of list_t
 *
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	/* while we have a pointer to list */
	while (h)
	{
		/* dereference pointer and check if str is null */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else /* if not NULL */

			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}

	return (c);
}
