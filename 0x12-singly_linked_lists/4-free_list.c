#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *jump;

	while (head)
	{
		jump = head->next;
		free(head->str);
		free(head);
		head = jump;
	}
}
