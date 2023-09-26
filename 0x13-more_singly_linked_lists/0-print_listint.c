#include "lists.h"
/**
 * print_listint - This will  print all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t value = 0;

	if (h)
	{
		printf("%d\n", h->n);
		value++;
		h = h->next;
	}
	return (value);
}
