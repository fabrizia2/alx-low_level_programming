#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to address
 * Author: Melvin Renish
 *
 * Return;
 */

void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}

	head = NULL;
}
