<<<<<<< HEAD
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
=======
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

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else

			printf("[%d] %s\n", h->len, h->str);
		c++;
		h = h->next;
	}

	return (c);
>>>>>>> dd048657f77cdbd753eaf696a278f9cbf7f61d5a
}
