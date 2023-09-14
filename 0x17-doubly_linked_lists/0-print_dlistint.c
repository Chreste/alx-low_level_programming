#include "lists.h"

/**
 * print_distint - prints doubly_linked list
 * @h: address of head node
 *
 * Return : size of list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (h == NULL)
		return (x);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (x);
}
