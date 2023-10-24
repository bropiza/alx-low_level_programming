#include <stdlib.h>
#include "lists.h"

/**
 * free_list - makes linked list free
 * @head: list of freed list_t
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}