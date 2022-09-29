#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: list's head
 *
 * Return;
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
