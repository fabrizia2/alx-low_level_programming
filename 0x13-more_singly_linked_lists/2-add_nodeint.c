#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node
 * @head: pointer to new address of new node
 * @n: string
 *
 * Return: address of new element, NULL on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newadd;

	newadd = malloc(sizeof(*newadd));
	if (newadd == NULL)
	{
		return (NULL);
	}
	newadd->n = n;
	newadd->next = *head;
	*head = newadd;

	return (newadd);
}
