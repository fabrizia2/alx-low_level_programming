#include "lists.h"

/**
 * add_dnodeint_end - adds new node to the end of doubly linked list
 * @head: double pointer to head of list
 * @n: element to add
 *
 * Return: address of new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newadd, *end;

	newadd = malloc(sizeof(*newadd));
	if (!newadd)
		return (NULL);

	newadd->n = n;
	newadd->prev = NULL;
	newadd->next = NULL;

	if (!(*head))
		*head = newadd;
	else
	{
		end = *head;
		while (end->next)
		{
			end = end->next;
		}
		end->next = newadd;
		newadd->prev = end;
		end = newadd;
	}
	return (newadd);
}
