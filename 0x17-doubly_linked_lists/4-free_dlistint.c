#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dislint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	free(head);
}
