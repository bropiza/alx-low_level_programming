#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - returns the length of string
 * @s: string to check length
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints the elements of list_t list
 * @h: list of list_t
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{

			printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
			h = h->next;
			s++;

	}
	return (s);
}