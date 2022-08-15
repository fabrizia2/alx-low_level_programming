#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end
 * @head: address of new node
 * @n: string
 *
 * Return: address of new element, NULL on failier
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newadd, *oldadd;

	newadd = malloc(sizeof(*newadd));
	if (newadd == NULL)
	{
		return (NULL);
	}
	newadd->n = n;
	newadd->next = NULL;

	if (*head == NULL)
	{
		*head = newadd;
	}

	else
	{
		oldadd = *head;
		while (oldadd->next != NULL)
		oldadd = oldadd->next;
	oldadd->next = newadd;
	}

	return (*head);
}
