#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head of list
 * @n: beggining
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newadd;

	newadd = malloc(sizeof(*newadd));
	if (newadd == NULL)
	{
		return (NULL);
	}

	newadd->n = n;
	newadd->prev = NULL;
	newadd->next = NULL;

	if (!(*head))
		*head = newadd;
	else
	{
		(*head)->prev = newadd;
		newadd->next = *head;
		*head = newadd;
	}

	return (newadd);
}
