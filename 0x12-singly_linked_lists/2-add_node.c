#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: This is a double pointer to the list_t list
 * @str: It is a  new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *luck;
	unsigned int length = 0;

	while (str[length])
		length++;
	luck = malloc(sizeof(list_t));
	if (!luck)
		return (NULL);
	luck->str = strdup(str);
	luck->len = length;
	luck->next = (*head);
	(*head) = luck;
	return (*head);
}
