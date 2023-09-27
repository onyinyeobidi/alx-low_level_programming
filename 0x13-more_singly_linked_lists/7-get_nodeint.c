#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * temp: Pointer that tranverse through the available nodes
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;

	listint_t *temp = head;

	while (temp && t < index)
	{
		temp = temp->next;
		t++;
	}
	return (temp ? temp : NULL);
}
