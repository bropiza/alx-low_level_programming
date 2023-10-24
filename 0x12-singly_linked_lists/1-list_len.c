#include <stdlib.h>
#include "lists.h"

/**
 * list_len - shows the length of a linked list
 * @h: pointer that points to the list_t list
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
