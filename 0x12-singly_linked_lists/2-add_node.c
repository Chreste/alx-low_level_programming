#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;

	while (str[l])
	{
		l++;
	}

	list_t *new = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return;
	}
	new->str = str;
	new->l = l;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
