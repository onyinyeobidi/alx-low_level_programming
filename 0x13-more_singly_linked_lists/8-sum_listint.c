#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 * ptr: pointer that tranverse through the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
