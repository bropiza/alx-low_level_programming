#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in linkint_t list
 * @h: pointer to the head of listint_t list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{

		count++;
		h = h->next;
	}
	return (count);
}