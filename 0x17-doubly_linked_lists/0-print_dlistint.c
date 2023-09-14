#include "lists.h"

/**
 * print_distint - prints doubly_linked list
 * @h: address of head node
 *
 * Return : size of list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
